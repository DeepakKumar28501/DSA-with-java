import java.util.*;

public class String_ceiling {
    public static void main(String args[]) {
        char arr[] = { 'a', 'c', 'e', 'h' };
        char target = 'f';
        System.out.println((ceiling(arr, target)));

    }

    public static char ceiling(char arr[], char target) {
        int start = 0, end = arr.length - 1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (target > arr[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return arr[start% arr.length];
    }
}
