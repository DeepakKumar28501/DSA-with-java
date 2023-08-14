import java.util.*;

class Expresion_order_op {
    String str;
    int stk[];

    public Expresion_order_op(String expString) {
        str = expString;
        stk = new int[str.length()];
        System.out.println(expString);
    }

    public void Char_print_arr() {
        // it takes time=O(N), Space=O(n)
        char ch[] = str.toCharArray();
        for (int i = 0; i < ch.length; i++) {
            System.out.print(ch[i] + " ");
        }
    }

    public void Char_print_Naive() {
        for (int i = 0; i < str.length(); i++) {
            System.out.print(str.charAt(i) + " ");
        }
    }
}

class Expresion_order {
    public static void main(String[] args) {
        Scanner str = new Scanner(System.in);
        System.out.println("Enter the Mathematical expresion:");
        String expstr = str.nextLine();
        str.close();

        Expresion_order_op pre = new Expresion_order_op(expstr);
        pre.Char_print_Naive();
        pre.Char_print_arr();
    }
}
