
import java.util.ArrayList;
public class Median_of_array {
    public static void main(String[] args) {
        int num1[] = { 1, 2 };
        int num2[] = { 3, 4 };
        ArrayList<Integer> arr = new ArrayList<>();
        for (int a : num1)
            arr.add(a);
        for (int a : num2)
            arr.add(a);
        int mid = arr.size() / 2;
        int size = arr.size();
        System.out.println(arr);
        // System.out.println(findMedianSortedArrays(num1, num2));
    }

    // public static double findMedianSortedArrays(int[] num1, int[] num2) {

    // ArrayList<Integer> arr = new ArrayList<>();
    // for (int a : num1)
    // arr.add(a);
    // for (int a : num2)
    // arr.add(a);
    // int mid = arr.size() / 2;
    // int size = arr.size();
    // System.out.println(arr);

    // }

}
