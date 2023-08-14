package numbersprogram;

import java.util.*;
import java.lang.Math;

public class AllNumbers {
    Scanner sc = new Scanner(System.in);

    public void prime_number(int n) {
        boolean k = true;
        for (int i = 2; i < n; i++) {
            if (n % i == 0)
                k = false;
        }
        if (k)
            System.out.println("Number is Prime");
        else
            System.out.println("Not prime");
    }

    public int input(String str) {
        System.out.println(str + " : ");
        return sc.nextInt();
    }

    // prime numbers
    // 1,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,
    public void print_prime_num(int n) {
        int count = 0;
        System.out.println("Prime Numbers: 1,");
        for (int i = 2; i <= n; i++) {
            boolean k = true;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    k = false;
                    break;
                }
            }
            if (k) {
                System.out.print(i + ",");
                count++;
            }
        }
        System.out.println("\n Total prime Number:" + count);
    }

    public void armstrong_num(int k) {
        // 0, 1, 153, 370, 371 and 407
        int n = k;
        int count = 0;
        while (n != 0) {
            n /= 10;
            count++;
        }
        int sum = 0;
        n = k;
        while (n != 0) {
            int temp = n % 10;
            sum += (int) Math.pow(temp, count);
            System.out.println(sum);

            n /= 10;
        }
        if (sum == k)
            System.out.println("Armstrong number");
        else
            System.out.println("Not Armstrong");
    }

    public void palindrome(int k) {
        for (int i = 1; i <= k; i++) {
            int n = i;
            int rev = 0;
            while (n != 0) {
                int temp = n % 10;
                rev = rev * 10 + temp;
                n /= 10;
            }
            if (rev == i)
                System.out.println("Palindrome number:" + i);

        }
    }

    public static void main(String[] args) {
        AllNumbers obj = new AllNumbers();
        // obj.prime_number(5);
        // obj.print_prime_num(100);
        obj.armstrong_num(1634);
        obj.palindrome(200);
    }
}
