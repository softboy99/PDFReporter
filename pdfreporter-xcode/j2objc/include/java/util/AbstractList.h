//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/AbstractList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilAbstractList")
#ifdef RESTRICT_JavaUtilAbstractList
#define INCLUDE_ALL_JavaUtilAbstractList 0
#else
#define INCLUDE_ALL_JavaUtilAbstractList 1
#endif
#undef RESTRICT_JavaUtilAbstractList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilAbstractList_) && (INCLUDE_ALL_JavaUtilAbstractList || defined(INCLUDE_JavaUtilAbstractList))
#define JavaUtilAbstractList_

#define RESTRICT_JavaUtilAbstractCollection 1
#define INCLUDE_JavaUtilAbstractCollection 1
#include "java/util/AbstractCollection.h"

#define RESTRICT_JavaUtilList 1
#define INCLUDE_JavaUtilList 1
#include "java/util/List.h"

@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilListIterator;

/*!
 @brief <code>AbstractList</code> is an abstract implementation of the <code>List</code> interface, optimized
 for a backing store which supports random access.
 This implementation does
 not support adding or replacing. A subclass must implement the abstract
 methods <code>get()</code> and <code>size()</code>, and to create a
 modifiable <code>List</code> it's necessary to override the <code>add()</code> method that
 currently throws an <code>UnsupportedOperationException</code>.
 @since 1.2
 */
@interface JavaUtilAbstractList : JavaUtilAbstractCollection < JavaUtilList > {
 @public
  /*!
   @brief A counter for changes to the list.
   */
  jint modCount_;
}

#pragma mark Public

/*!
 @brief Adds the specified object at the end of this List.
 @param object
 the object to add
 @return true
 @throws UnsupportedOperationException
 if adding to this List is not supported
 @throws ClassCastException
 if the class of the object is inappropriate for this
 List
 @throws IllegalArgumentException
 if the object cannot be added to this List
 */
- (jboolean)addWithId:(id)object;

/*!
 @brief Inserts the specified object into this List at the specified location.
 The object is inserted before any previous element at the specified
 location. If the location is equal to the size of this List, the object
 is added at the end.
 <p>
 Concrete implementations that would like to support the add functionality
 must override this method.
 @param location
 the index at which to insert.
 @param object
 the object to add.
 @throws UnsupportedOperationException
 if adding to this List is not supported.
 @throws ClassCastException
 if the class of the object is inappropriate for this
 List
 @throws IllegalArgumentException
 if the object cannot be added to this List
 @throws IndexOutOfBoundsException
 if <code>location < 0 || location > size()</code>
 */
- (void)addWithInt:(jint)location
            withId:(id)object;

/*!
 @brief Inserts the objects in the specified Collection at the specified location
 in this List.
 The objects are added in the order they are returned from
 the collection's iterator.
 @param location
 the index at which to insert.
 @param collection
 the Collection of objects
 @return <code>true</code> if this List is modified, <code>false</code> otherwise.
 @throws UnsupportedOperationException
 if adding to this list is not supported.
 @throws ClassCastException
 if the class of an object is inappropriate for this list.
 @throws IllegalArgumentException
 if an object cannot be added to this list.
 @throws IndexOutOfBoundsException
 if <code>location < 0 || location > size()</code>
 */
- (jboolean)addAllWithInt:(jint)location
   withJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Removes all elements from this list, leaving it empty.
 @throws UnsupportedOperationException
 if removing from this list is not supported.
 - seealso: List#isEmpty
 - seealso: List#size
 */
- (void)clear;

/*!
 @brief Compares the specified object to this list and return true if they are
 equal.
 Two lists are equal when they both contain the same objects in the
 same order.
 @param object
 the object to compare to this object.
 @return <code>true</code> if the specified object is equal to this list,
 <code>false</code> otherwise.
 - seealso: #hashCode
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Returns the element at the specified location in this list.
 @param location
 the index of the element to return.
 @return the element at the specified index.
 @throws IndexOutOfBoundsException
 if <code>location < 0 || location >= size()</code>
 */
- (id)getWithInt:(jint)location;

/*!
 @brief Returns the hash code of this list.
 The hash code is calculated by taking
 each element's hashcode into account.
 @return the hash code.
 - seealso: #equals
 - seealso: List#hashCode()
 */
- (NSUInteger)hash;

/*!
 @brief Searches this list for the specified object and returns the index of the
 first occurrence.
 @param object
 the object to search for.
 @return the index of the first occurrence of the object, or -1 if it was
 not found.
 */
- (jint)indexOfWithId:(id)object;

/*!
 @brief Returns an iterator on the elements of this list.
 The elements are
 iterated in the same order as they occur in the list.
 @return an iterator on the elements of this list.
 - seealso: Iterator
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Searches this list for the specified object and returns the index of the
 last occurrence.
 @param object
 the object to search for.
 @return the index of the last occurrence of the object, or -1 if the
 object was not found.
 */
- (jint)lastIndexOfWithId:(id)object;

/*!
 @brief Returns a ListIterator on the elements of this list.
 The elements are
 iterated in the same order that they occur in the list.
 @return a ListIterator on the elements of this list
 - seealso: ListIterator
 */
- (id<JavaUtilListIterator>)listIterator;

/*!
 @brief Returns a list iterator on the elements of this list.
 The elements are
 iterated in the same order as they occur in the list. The iteration
 starts at the specified location.
 @param location
 the index at which to start the iteration.
 @return a ListIterator on the elements of this list.
 @throws IndexOutOfBoundsException
 if <code>location < 0 || location > size()</code>
 - seealso: ListIterator
 */
- (id<JavaUtilListIterator>)listIteratorWithInt:(jint)location;

/*!
 @brief Removes the object at the specified location from this list.
 @param location
 the index of the object to remove.
 @return the removed object.
 @throws UnsupportedOperationException
 if removing from this list is not supported.
 @throws IndexOutOfBoundsException
 if <code>location < 0 || location >= size()</code>
 */
- (id)removeWithInt:(jint)location;

/*!
 @brief Replaces the element at the specified location in this list with the
 specified object.
 @param location
 the index at which to put the specified object.
 @param object
 the object to add.
 @return the previous element at the index.
 @throws UnsupportedOperationException
 if replacing elements in this list is not supported.
 @throws ClassCastException
 if the class of an object is inappropriate for this list.
 @throws IllegalArgumentException
 if an object cannot be added to this list.
 @throws IndexOutOfBoundsException
 if <code>location < 0 || location >= size()</code>
 */
- (id)setWithInt:(jint)location
          withId:(id)object;

/*!
 @brief Returns a part of consecutive elements of this list as a view.
 The
 returned view will be of zero length if start equals end. Any change that
 occurs in the returned subList will be reflected to the original list,
 and vice-versa. All the supported optional operations by the original
 list will also be supported by this subList.
 <p>
 This method can be used as a handy method to do some operations on a sub
 range of the original list, for example
 <code>list.subList(from, to).clear();</code>
 <p>
 If the original list is modified in other ways than through the returned
 subList, the behavior of the returned subList becomes undefined.
 <p>
 The returned subList is a subclass of AbstractList. The subclass stores
 offset, size of itself, and modCount of the original list. If the
 original list implements RandomAccess interface, the returned subList
 also implements RandomAccess interface.
 <p>
 The subList's set(int, Object), get(int), add(int, Object), remove(int),
 addAll(int, Collection) and removeRange(int, int) methods first check the
 bounds, adjust offsets and then call the corresponding methods of the
 original AbstractList. addAll(Collection c) method of the returned
 subList calls the original addAll(offset + size, c).
 <p>
 The listIterator(int) method of the subList wraps the original list
 iterator. The iterator() method of the subList invokes the original
 listIterator() method, and the size() method merely returns the size of
 the subList.
 <p>
 All methods will throw a ConcurrentModificationException if the modCount
 of the original list is not equal to the expected value.
 @param start
 start index of the subList (inclusive).
 @param end
 end index of the subList, (exclusive).
 @return a subList view of this list starting from <code>start</code>
 (inclusive), and ending with <code>end</code> (exclusive)
 @throws IndexOutOfBoundsException
 if (start < 0 || end > size())
 @throws IllegalArgumentException
 if (start > end)
 */
- (id<JavaUtilList>)subListWithInt:(jint)start
                           withInt:(jint)end;

#pragma mark Protected

/*!
 @brief Constructs a new instance of this AbstractList.
 */
- (instancetype)init;

/*!
 @brief Removes the objects in the specified range from the start to the end
 index minus one.
 @param start
 the index at which to start removing.
 @param end
 the index after the last element to remove.
 @throws UnsupportedOperationException
 if removing from this list is not supported.
 @throws IndexOutOfBoundsException
 if <code>start < 0</code> or <code>start >= size()</code>.
 */
- (void)removeRangeWithInt:(jint)start
                   withInt:(jint)end;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilAbstractList)

FOUNDATION_EXPORT void JavaUtilAbstractList_init(JavaUtilAbstractList *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilAbstractList)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilAbstractList")
