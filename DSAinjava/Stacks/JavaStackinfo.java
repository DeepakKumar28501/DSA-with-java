import java.util.Stack;

// stack functions 
/*
pop(); to retrieve the top element from the stack

 * 
 */
class JavaStackinfo {

    public static void main(String[] args) {

        Stack<String> stk = new Stack<>();
        // stk.pop();
        // System.out.println(stk.pop());
        stk.push("Deepak ");
        stk.push("feepak ");
        stk.push("feepak ");
        stk.push("feepak ");
        stk.push("feepak ");
        stk.push("reepak ");
        stk.push("reepak ");
        stk.push("reepak ");
        stk.push("reepak ");
        stk.push("yeepak ");
        stk.push("yeepak ");
        stk.push("yeepak ");
        stk.push("yeepak ");
        // System.out.println(stk);// print all the element to the stack;
        // System.out.println(stk.pop());// return the top and remove of the element of
        // the stack
        // System.out.println(stk.peek());// return the top element of the stack but not
        // remove the element from the stack
        System.out.println(stk.size());// return the size of the stack
        // here the size of the stack is 3

        System.out.println(stk.capacity());// return the capacity of the stack

    }
}
