import java.util.*;

public class Stringbasic {
    public static void main(String args[]) {
        String str1 = "Deepak";
        String str2 = "kanoujiya";
        System.out.println(str1);
        System.out.println(str2);
        System.out.println(str1 + str2);
        System.out.println(str1 + "@" + str2);
        System.out.println('A' + 'B');// it print the ascii value with addition 131
        // string concatenate using + operator
        System.out.println("codePointAt " + str1.codePointAt(4));// codePointAt return inde character ascii value(int)
        System.out.println("Reapeat " + str1.repeat(2));// repeat method repeat the string n time like -
                                                        // deepakdeepak(string)
        System.out.println("length " + str1.length());// return no of character or length(int)
        // compare string
        // s1>s2: +ve value
        // s1==s2 : 0
        // s1>s2 : -ve value
        String st1 = "c";
        String st2 = "D";
        int t = 'c';
        System.out.println("ascii of c: " + t);
        t = 'D';
        System.out.println("ascii of D: " + t);
        System.out.println("String Compare " + st1.compareTo(st2));// case sensitive (return diffrence value - or +
                                                                   // ve)
        System.out.println("String Compare " + st1.compareToIgnoreCase(st2));// ignore Case (return diffrence value -
        // substring method
        String sub = " Hello programmer";
        // substring(startIndex,endindex) endindex is exclussive
        System.out.println("SubString :" + sub.substring(3, 6));// rteurn string

        // str replace
        String strep = "Thiss is Sting";
        System.out.println("String Replace:" + strep.replace("ss", "e"));

        // create a String array and find the all string length
        String strarr[] = new String[5];
        Scanner sc = new Scanner(System.in);
        int totallen = 0;
        for (int i = 0; i < 5; i++) {
            strarr[i] = sc.nextLine();
            totallen += strarr[i].length();
        }
        System.out.println("Total array strings Length:" + totallen);

        // String are immutable if i declaring than it can not be modified in memmory

    }
}
