import java.util.*;

class AlphaPattern {

    public static void pt1(int n) {
        /*
         * A
         * B G
         * C H M
         * D I N S
         * E J O T Y
         * F K P U Z _
         */
        System.out.println("** Printing the pattern... **");

        for (int i = 0; i <= 5; i++) {
            int alphabet = 65;
            int temp = i;
            for (int j = i; j >= 0; j--) {
                System.out.print((char) (alphabet + temp) + " ");
                temp = temp + 5;
            }
            System.out.println();
        }

    }

    public static void pt2(int n) {
        /*
         * A
         * A A
         * A B A
         * A C C A
         * A D F D A
         * A E J J E A
         */
        System.out.println("** Printing the pattern... **");

        for (int i = 0; i <= 5; i++) {
            int alphabet = 65;
            for (int j = 0; j <= i; j++) {
                System.out.print((char) (alphabet + j) + " ");
            }
            for (int k = i - 1; k >= 0; k--) {
                System.out.print((char) (alphabet + k) + " ");
            }
            System.out.println();
        }
    }

    public static void main(String args[]) {
        pt1(5);
        pt2(5);
    }
}