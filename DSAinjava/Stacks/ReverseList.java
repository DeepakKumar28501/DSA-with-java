import java.util.*;

class ReverseList {
    static int stk[];
    static int top = -1;
    static int size;

    public static int pop() {
        return stk[top--];
    }

    public static void push(int key) {
        stk[++top] = key;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of list");
        int n = sc.nextInt();
        stk = new int[n];
        for (int i = 0; i < n; i++) {
            push(sc.nextInt());
        }
        for (int i = 0; i < n; i++) {
            System.out.println(pop() + ",");
        }

    }
}
