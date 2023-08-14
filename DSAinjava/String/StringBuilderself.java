//String is immutable in java if i declared a string then we can not be change ,modify,update in string
//  memory we need to create a new String in memory

// beacuse the java code store in memory in two form Stack memory or head memory

// now we achieve the above operation to perform in string then we use 
// String Builder

// import java.util.*;

public class StringBuilderself {
    public static void main(String args[]) {

        StringBuilder sb = new StringBuilder("Java Developer");
        System.out.println("Original String: " + sb);
        // get character from string using charAt() Method
        System.out.println("Original String: " + sb.charAt(5));// get character
        // set char at index
        sb.setCharAt(5, 't');
        System.out.println("After set Characater" + sb);// get character
        // insert method in sb
        // sb.insert(index,character)
        sb.insert(0, 'y');
        System.out.println("Insert character " + sb);// get character
        // delete character or character
        sb.delete(2, 3);
        System.out.println("After deleting :" + sb);
        // append String
        sb.append('g');
        sb.append("hello");
        System.out.println("After Append :" + sb);
        System.out.println("After Append :" + sb.length());
        // revrse string
        StringBuilder sbrev = new StringBuilder("ABCDEFGHIJK");

        for (int i = 0; i < sbrev.length() / 2; i++) {
            int front = i;
            int back = sbrev.length() - 1 - i;
            char temp;
            temp = sbrev.charAt(front);
            sbrev.setCharAt(front, sbrev.charAt(back));
            sbrev.setCharAt(back, temp);
        }
        System.out.println("Reverse String :" + sbrev);
        System.out.println("Again reverse using predefine function:" + sbrev.reverse());

    }

}
