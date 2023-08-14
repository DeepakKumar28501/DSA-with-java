package List.arraylist;

import java.util.ArrayList;
import java.util.Collections;

public class Arraylisttest {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        list.add(1);
        list.add(2);
        list.add(4);
        list.add(5);
        System.out.println(list.getClass());// CHECK CLASS OF THE OBJECT
        System.out.println(list.get(0));
        System.out.println(list.get(1));// get element
        list.add(1, 7);// edd element in between
        System.out.println(list);
        // update or modify list element
        list.set(1, 23);
        System.out.println(list);

        // delete element
        list.remove(3); // pass index number
        System.out.println(list);
        // count all the element in the list
        System.out.println(list.size());
        // list iteration

        for (int i : list) {
            System.out.println(i);
        }
        // or
        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));
        }

        // sorting in Arraylist in ascending order
        Collections.sort(list); // Collections is the class where the sort function is define
        System.out.println(list);

    }

}
