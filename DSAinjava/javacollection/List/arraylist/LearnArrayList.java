package List.arraylist;

import java.util.ArrayList;

public class LearnArrayList {

    public static void main(String args[]) {
        ArrayList<String> studentName = new ArrayList<>();
        ArrayList<String> studentName2 = new ArrayList<>();
        studentName.add("Rakesh");
        studentName2.add("hakesh");
        studentName2.add("mkesh");
        studentName2.add("Rakesh");
        studentName2.add("takesh");
        studentName2.add("pakesh");
        // add function add the element at the end of arraylist
        studentName.add(1, "Deepak");// add element at the specific position
        // size increase after the outofindex size n
        // n+n/2+1
        System.out.println(studentName);
        studentName.addAll(studentName2);
        System.out.println(studentName2);
        // add another list
        System.out.println(studentName2);

        System.out.println(studentName2.get(0));
        System.out.println(studentName2.get(1));
        studentName2.set(0, "string");
        System.out.println(studentName2.get(0));

    }
}
