import java.util.*;

class Stackcls {
    private int stk[];
    private int size;
    private int top = -1;

    Stackcls(int size) {
        stk = new int[size];
        this.size = size;
    }

    public boolean underflow() {
        return top == -1 ? false : true;
    }

    public boolean overflow() {
        return top == size - 1 ? false : true;
    }

    public void push(int value) {
        stk[++top] = value;
    }

    public int pop() {
        return stk[top--];
    }

    public int peek() {
        return stk[top];
    }

}

class Stack {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int val, size;
        System.out.println("Enter The size of stack: ");
        size = sc.nextInt();
        Stackcls stk1 = new Stackcls(size);
        do {
            System.out.println("Operation Menu");
            System.out.println("Press 1 For Push");
            System.out.println("Press 2 For POP");
            System.out.println("Press 3 For Peek");
            System.out.println("Press 4 For Exit");
            System.out.println("Enter The choice:");
            int choice = sc.nextInt();
            switch (choice) {
                case 1:
                    System.out.println("Enter the value:");
                    if (stk1.overflow())
                        stk1.push(sc.nextInt());
                    else
                        System.out.println("Stack is Overflow");
                    break;
                case 2:
                    if (stk1.underflow())
                        System.out.println("top item is:" + stk1.pop());
                    else
                        System.out.println("Stack underflow");

                    break;
                case 3:
                    if (stk1.underflow())
                        System.out.println("top item is:" + stk1.peek());
                    else
                        System.out.println("Stack underflow");
                    break;
                case 4:
                    System.exit(0);
                default:
                    System.out.println("Wrong choice Please Enter Write choice!............😂");

            }
        } while (true);

    }
}
