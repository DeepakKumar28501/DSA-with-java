package List.arraylist;

import java.util.Vector;
import java.util.Iterator;

public class VectorLearn {

    public static void main(String[] args) {
        Vector<String> list = new Vector<>();
        Vector vct = new Vector();// also create as
        list.add("Deepak");// add method return boolean
        vct.add("Deepak");
        vct.addElement("Hello");// this method not return anything or void
        System.out.println(vct);
        if (list.add("Bansal")) {
            System.out.println("inserted");
        } else {
            System.out.println("not inserted");
        }
        // insertElementAt(value,index);
        vct.insertElementAt("insert function", 1);
        System.out.println(vct);
        System.out.println(vct.size());// return the number of element in the list
        System.out.println(vct.capacity());// return the capicity of the vector
        System.out.println(vct.contains("Hello"));// check the value is available or not in the vector
        System.out.println(vct.hashCode());// return the hashcode of the value
        String s = "dg";
        System.out.println(s.hashCode());
        // System.out.println(vct.iterator());
        Iterator<String> iterator = vct.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }

    }
}

/*
 * all functions of java vector
 * In Java, the `Vector` class is a part of the Java Collections Framework and
 * provides various methods to manipulate a dynamic array. Here is a list of all
 * the commonly used methods in the `Vector` class:
 * 
 * 1. `add(E element)`: Adds the specified element to the end of the vector.
 * 2. `add(int index, E element)`: Inserts the specified element at the
 * specified position in the vector.
 * 3. `addAll(Collection<? extends E> c)`: Adds all the elements of the
 * specified collection to the end of the vector.
 * 4. `addAll(int index, Collection<? extends E> c)`: Inserts all the elements
 * of the specified collection at the specified position in the vector.
 * 5. `remove(int index)`: Removes the element at the specified position in the
 * vector.
 * 6. `remove(Object o)`: Removes the first occurrence of the specified element
 * from the vector.
 * 7. `removeAll(Collection<?> c)`: Removes all the elements from the vector
 * that are present in the specified collection.
 * 8. `clear()`: Removes all the elements from the vector.
 * 9. `get(int index)`: Returns the element at the specified position in the
 * vector.
 * 10. `set(int index, E element)`: Replaces the element at the specified
 * position in the vector with the specified element.
 * 11. `contains(Object o)`: Returns `true` if the vector contains the specified
 * element, otherwise `false`.
 * 12. `containsAll(Collection<?> c)`: Returns `true` if the vector contains all
 * the elements of the specified collection, otherwise `false`.
 * 13. `isEmpty()`: Returns `true` if the vector contains no elements, otherwise
 * `false`.
 * 14. `size()`: Returns the number of elements in the vector.
 * 15. `indexOf(Object o)`: Returns the index of the first occurrence of the
 * specified element in the vector, or -1 if the element is not found.
 * 16. `lastIndexOf(Object o)`: Returns the index of the last occurrence of the
 * specified element in the vector, or -1 if the element is not found.
 * 17. `toArray()`: Returns an array containing all the elements of the vector
 * in the same order.
 * 18. `toArray(T[] a)`: Returns an array containing all the elements of the
 * vector in the same order, into the specified array if it is large enough;
 * otherwise, a new array of the same runtime type is allocated for this
 * purpose.
 * 19. `subList(int fromIndex, int toIndex)`: Returns a view of the portion of
 * the vector between the specified `fromIndex`, inclusive, and `toIndex`,
 * exclusive.
 * 20. `iterator()`: Returns an iterator over the elements in the vector in the
 * proper sequence.
 * 21. `listIterator()`: Returns a list iterator over the elements in the vector
 * in the proper sequence.
 * 22. `listIterator(int index)`: Returns a list iterator over the elements in
 * the vector, starting at the specified position in the proper sequence.
 * 
 * Note that the `Vector` class is a legacy class, and in modern Java
 * applications, it is recommended to use `ArrayList` or other `List`
 * implementations from the Java Collections Framework, as they offer better
 * performance and are not synchronized by default.
 * 
 */
