package org.oss.pdfreporter.android;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.Arrays;

import org.oss.pdfreporter.android.pdfreporter.R;
import org.oss.pdfreporter.engine.JRException;
import org.oss.pdfreporter.xml.parsers.factory.XmlParserFactory;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.AlertDialog.Builder;
import android.app.DialogFragment;
import android.app.ProgressDialog;
import android.content.ActivityNotFoundException;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.view.View;
import android.view.View.OnClickListener;
import android.view.animation.AnimationUtils;
import android.widget.AdapterView;
import android.widget.AdapterView.OnItemClickListener;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends Activity {

	@SuppressWarnings("deprecation")
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);

		ListView list = (ListView) findViewById(R.id.listView1);
		list.setAdapter(new ReportAdapter(this, Arrays.asList("Test1", "Test2", "Test3", "Test2", "Test3", "Test2",
				"Test3")));
		list.setOnItemClickListener(new OnItemClickListener() {

			@Override
			public void onItemClick(AdapterView<?> arg0, View arg1, int arg2, long arg3) {
				String text = (String) arg0.getItemAtPosition(arg2);
				TextView tView = (TextView) findViewById(R.id.spinnerText);
				tView.setText(text);
				hidePicker();
			}
		});

		findViewById(R.id.picker).setOnClickListener(new OnClickListener() {

			@Override
			public void onClick(View v) {
				hidePicker();
			}
		});

		findViewById(R.id.linearLayout1).setOnClickListener(new OnClickListener() {

			@Override
			public void onClick(View v) {
				showPicker();
			}
		});

		findViewById(R.id.button1).setOnClickListener(new OnClickListener() {

			@Override
			public void onClick(View v) {
				generate();
			}
		});

		tryCopyAssetsToSDCard();
	}

	public void generate() {
		final ProgressDialog progressDialog = ProgressDialog.show(this, "PDFReporter", "Generating report...", true, false);
		new Thread(new Runnable() {

			@Override
			public void run() {

				final String dirPath = getExternalFilesDir(null) + "/reports";
				final String pdfPath = getExternalFilesDir(null) + "/output.pdf";
				try {
					ReportExporter.exportReportToPdf(pdfPath,
							dirPath + "/jrxml/shapes/ShapesReport.jrxml", new String[] { dirPath + "/resources" });
					
					runOnUiThread(new Runnable() {

						@Override
						public void run() {
							try {
								
								progressDialog.dismiss();
								Intent intent = new Intent(Intent.ACTION_VIEW);
								intent.setDataAndType(Uri.fromFile(new File(pdfPath)), "application/pdf");
								intent.setFlags(Intent.FLAG_ACTIVITY_NO_HISTORY);
								startActivity(intent);
								
							} catch (ActivityNotFoundException e1) {
								runOnUiThread(new Runnable() {

									@Override
									public void run() {
										progressDialog.dismiss();
										AlertDialog.Builder builder = new Builder(MainActivity.this);
										builder.setTitle("Report created.").setPositiveButton("OK", null).create().show();

									}
								});
							}
						}
					});

				} catch (Exception e) {
					runOnUiThread(new Runnable() {

						@Override
						public void run() {
							progressDialog.dismiss();
							AlertDialog.Builder builder = new Builder(MainActivity.this);
							builder.setTitle("Report failed to generate.").setNegativeButton("OK", null).create().show();
						}
					});
				}
			}
		}).start();

	}

	@Override
	public void onBackPressed() {
		if (findViewById(R.id.picker).getVisibility() == View.VISIBLE) {
			hidePicker();
		}
		else {
			super.onBackPressed();
		}
	}

	public void tryCopyAssetsToSDCard() {

		String dirPath = getExternalFilesDir(null) + "/reports";
		File dir = new File(dirPath);
		if (!dir.exists()) {
			final ProgressDialog progress = ProgressDialog.show(this, "Preparing for first run", "Copying files...",
					true, false);
			Thread copyThread = new Thread(new Runnable() {

				@Override
				public void run() {
					copyAsset("reports");
					runOnUiThread(new Runnable() {

						@Override
						public void run() {
							progress.dismiss();
						}
					});
				}
			});
			copyThread.start();
		}
	}

	private void copyAsset(String file) {
		String extDir = getExternalFilesDir(null) + "/";
		try {
			InputStream is = getAssets().open(file);
			FileOutputStream os = new FileOutputStream(extDir + file);
			copyFile(is, os);
			is.close();
			os.flush();
			os.close();
		} catch (IOException e) {
			try {
				String[] list = getAssets().list(file);
				File dir = new File(extDir + file);
				dir.mkdir();
				for (String listFile : list) {
					copyAsset(file + "/" + listFile);
				}
			} catch (IOException e1) {
				e1.printStackTrace();
			}
		}
	}

	private void copyFile(InputStream in, OutputStream out) throws IOException {
		byte[] buffer = new byte[1024 * 16];
		int read;
		while ((read = in.read(buffer)) != -1) {
			out.write(buffer, 0, read);
		}
	}

	private void hidePicker() {
		findViewById(R.id.picker).startAnimation(
				AnimationUtils.loadAnimation(getApplicationContext(), R.anim.slide_out_up));
		findViewById(R.id.picker).setVisibility(View.GONE);
	}

	private void showPicker() {
		findViewById(R.id.picker).startAnimation(
				AnimationUtils.loadAnimation(getApplicationContext(), R.anim.slide_in_up));
		findViewById(R.id.picker).setVisibility(View.VISIBLE);
	}
}
