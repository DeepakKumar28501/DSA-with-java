// recursion or iteration is mostly similar
/*
    Direct Recursion: In direct recursion, a function calls itself directly.

    Indirect Recursion: In indirect recursion, a function calls another function,
                    which in turn calls the original function or any other function that eventually 
                    leads back to the original function.
    when we use recursion then every recursive function call in memory create by stack form
 */

class Beginning {
    public static void printnum_rev(int n) {
        if (n == 0)
            return;
        else
            System.out.print(n + " ");
        printnum_rev(n - 1);
    }

    public static void printnumbers(int start, int end) {
        if (start == end)
            return;
        else
            System.out.print(start + " ");
        printnumbers(start + 1, end);

    }

    public static void sum_natural_num(int n, int sum) {
        if (n == 0) {
            System.out.print("Sum of Natural Numbers is: " + sum);
            return;
        } else {
            sum += n;
            sum_natural_num(n - 1, sum);
        }

    }

    public static void main(String args[]) {
        printnum_rev(5);// print numbers from 5 to 1
        System.out.println();
        printnumbers(1, 6);// print numbers from 1 to 5
        System.out.println();
        sum_natural_num(10, 0);

    }
}
