red='\x1B[1;34m'
nc='\x1B[0m' # No Color

CONFIGURATION=Debug

CORE_DIR=PDFReporter-core/gen
EXT_DIR=PDFReporter-extensions/gen
IOS_DIR=PDFReporter-ios/gen
FRAMEWORK_DIR=PDFReporterKit/PDFReporterKit/Sources
FRAMEWORK_DEST_DIR=PDFReporter/PDFReporterKit.framework
NATIVE_CORE_DIR=PDFReporter-core/native
NATIVE_IOS_DIR=PDFReporter-ios/native

MERGE_DIRS=($CORE_DIR $EXT_DIR $IOS_DIR $NATIVE_CORE_DIR $NATIVE_IOS_DIR)
GEN_DIRS=($CORE_DIR $EXT_DIR $IOS_DIR $FRAMEWORK_DIR $FRAMEWORK_DEST_DIR)

echo "Preparing target directories..."
for i in ${GEN_DIRS[@]}; do
	rm -rf $i
done

echo
echo "${red}Translating Core...${nc}"
j2objc/j2objc --no-hide-private-members --static-accessor-methods -source 7 -classpath ../pdfreporter-extensions/src:../pdfreporter-core/src -d $CORE_DIR -use-arc `find ../pdfreporter-core/src -name '*.java'` | grep error

echo
echo "${red}Translating Extensions...${nc}"
j2objc/j2objc --no-hide-private-members --static-accessor-methods -source 7 -classpath ../pdfreporter-extensions/src -d $EXT_DIR -use-arc `find ../pdfreporter-extensions/src -name '*.java'` | grep error

echo
echo "${red}Translating Portable...${nc}"
j2objc/j2objc --no-hide-private-members --static-accessor-methods -source 7 -classpath ../pdfreporter-core/src:../pdfreporter-extensions/src:../pdfreporter-portable/src -d $IOS_DIR -use-arc `find ../pdfreporter-portable/src -name '*.java'` | grep error

echo
echo "${red}Translating iOS...${nc}"
j2objc/j2objc --no-hide-private-members --static-accessor-methods -source 7 -classpath ../pdfreporter-core/src:../pdfreporter-extensions/src:../pdfreporter-portable/src:../pdfreporter-ios/stubs -d $IOS_DIR -use-arc `find ../pdfreporter-ios/src -name '*.java'` | grep error


echo
echo "Updating PDFReporterKit"
for i in ${MERGE_DIRS[@]}; do
	rsync --recursive "${i}/" $FRAMEWORK_DIR
done

echo
echo "Building PDFReporterKit"
cd PDFReporterKit
carthage update --platform iOS
cd -
xcodebuild -project PDFReporterKit/PDFReporterKit.xcodeproj -scheme PDFReporterKit-Universal -configuration $CONFIGURATION | xcpretty

echo
echo "Updating sample project"
mv PDFReporterKit/Output/PDFReporterKit-$CONFIGURATION-iphoneuniversal/PDFReporterKit.framework PDFReporter
rm -rf PDFReporterKit/Output

echo "Done 🍻"
