import java.util.Scanner;
public class BinaryTreeKu {

    private static class  Node{
        int value;
        Node left;
        Node right;
        public Node(int data){
            value=data;
            left=null;
            right=null;
        }
    }
    private Node root;

    public void populate(Scanner scanner){
        System.out.println("Enter the root Node: ");
       int data=scanner.nextInt();
       root=new Node(data);
       populate(scanner, root);
       
    }
    private void populate(Scanner scanner,Node node){
        // its a recursion method
        System.out.println("Do you want to enter left of"+ node.value);
        boolean left=scanner.nextBoolean();
        if(left){
            System.out.println("Enter the left value of "+node.value);
            int data=scanner.nextInt();
            node.left=new Node(data);
            populate(scanner, node.left);
        }
        System.out.println("Do you want to insert right of "+node.value);
        boolean right=scanner.nextBoolean();
        if(right){
            System.out.println("Enter the right value of "+node.value);
            int data=scanner.nextInt();
            node.right=new Node(data);
            populate(scanner, node.right);
        }
    }

    public void display(){
        display(root,"");
    }
    private  void display(Node node,String indent){
        if(node==null)
        return;
        System.out.println(indent+node.value);
        display(node.left, indent+"\t");
        display(node.right, indent+"\t");

    }
    public void prettydisplay(){
        prettydisplay(root,0);
    }
    private void prettydisplay(Node node ,int level){
        if(node==null)
            return;
        prettydisplay(node.right, level+1);
        if(level!=0){
            for(int i=0;i<level-1;i++){
                System.out.print("|\t\t");
            }
            System.out.println("|-------->"+node.value);
        }else{
            System.out.println(node.value);
        }
        prettydisplay(node.left, level+1);
    }

    public static void main(String args[]){
        BinaryTreeKu tree=new BinaryTreeKu();
        Scanner sc=new Scanner(System.in);
        tree.populate(sc);
        // tree.display();
        tree.prettydisplay();

    }
}
