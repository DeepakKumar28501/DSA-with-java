import java.util.*;

class BinarySearchtree {
    static Scanner sc = new Scanner(System.in);

    static class Node {
        int data;
        Node left, right;// left and right have a by defualt null

        Node(int value) {
            this.data = value;
        }

    }

    // insert Node
    public static Node InsertNode(Node root, int value) {
        System.out.println("Inserted");
        if (root == null) {
            root = new Node(value);
            return root;
        }
        if (root.data > value) {
            // leftsubtree
            root.left = InsertNode(root.left, value);
        } else {
            root.right = InsertNode(root.right, value);
        }
        return root;
    }

    // preorder
    public static void Preorder(Node root) {
        if (root == null) {
            return;
        }
        System.out.println(root.data + ",");
        Preorder(root.left);
        Preorder(root.right);

    }

    // Inorder
    public static void Inorder(Node root) {
        if (root == null) {
            return;
        }
        Preorder(root.left);
        System.out.println(root.data + ",");
        Preorder(root.right);
    }

    // Postorder
    public static void Postorder(Node root) {
        if (root == null) {
            return;
        }
        Preorder(root.left);
        Preorder(root.right);
        System.out.println(root.data + ",");

    }

    // minimum node
    public static void Min_node(Node root) {
        if (root.left == null) {
            System.out.println(root.data + "Minimun Element");
            return;
        } else {
            Min_node(root.left);
        }
    }

    // maximum node
    public static void Max_node(Node root) {
        if (root.right == null) {
            System.out.println("Maximum Node: " + root.data);
            return;
        }
        Min_node(root.right);

    }

    // minimum node
    public static int Min_node_ref(Node root) {
        if (root.left == null)
            return root.data;
        return Min_node_ref(root.left);

    }

    // maximum node
    public static int Max_node_ref(Node root) {
        if (root.right == null)
            return root.data;
        return Min_node_ref(root.right);

    }

    // input value method
    public static int input() {
        System.out.println("Enter the Node Value: ");
        return sc.nextInt();
    }

    // search node in Bst method
    public static boolean Search_bst(Node root, int key) {
        if (root == null) {
            return false;
        }
        if (root.data > key) {
            return Search_bst(root.left, key);
        } else if (root.data < key) {
            return Search_bst(root.right, key);
        } else {
            return true;
        }

    }

    // count node in Bst
    public static int Count_node(Node root) {
        if (root == null) {
            return 0;
        }
        int l = Count_node(root.left);
        int r = Count_node(root.right);
        return l + r + 1;
    }

    // count left subtre element
    public static int Count_left_subtree_node(Node root) {
        if (root.left == null) {
            return 0;
        }
        int count = 1;
        count += Count_left_subtree_node(root.left);
        return count;
    }

    // count left subtree tree element
    public static int Count_right_subtree_node(Node root) {
        if (root.right == null) {
            return 0;
        }
        int count = 1;
        count += Count_right_subtree_node(root.right);
        return count;
    }

    public static Node Delete_node(Node root, int key) {
        if (root == null)
            return root;
        if (root.data > key)
            root.left = Delete_node(root.left, key);
        else if (key > root.data)
            root.right = Delete_node(root.right, key);
        else {
            if (root.left == null)
                return root.right;
            else if (root.right == null)
                return root.left;
            root.data = Min_node_ref(root.right);// find min node in the right subtree
            root.right = Delete_node(root.right, root.data);
        }
        return root;
    }

    public static boolean Check_bst(Node root, int min, int max) {
        if (root == null)
            return true;
        if (root.data < min || root.data > max)
            return false;
        return (Check_bst(root.left, min, root.data - 1)) && (Check_bst(root.right, root.data = 1, max));
    }

    public static void main(String args[]) {
        Node root = null;
        int choice;
        int arr[] = { 23, 34, 12, 45, 67, 77, 13, 56 };

        do {
            System.out.println("******* Tree Operation Menu*******");
            System.out.println("1. Insert Node");
            System.out.println("2. Preorder Traversal");
            System.out.println("3. Inorder Traversal");
            System.out.println("4. Postorder Traversal");
            System.out.println("5. Find Minimum node");
            System.out.println("6. Find Maximum node");
            System.out.println("7. Find a node");
            System.out.println("8. Count Node");
            System.out.println("9. Count Left subtree Node");
            System.out.println("10. Count right subtree Node");
            System.out.println("11. Delete Node");
            System.out.println("15. Exit");
            System.out.print("Enter Your Choice:");
            choice = sc.nextInt();
            switch (choice) {
                case 1:
                    for (int i = 0; i < 8; i++) {
                        root = InsertNode(root, arr[i]);
                    }
                    break;
                case 2:
                    Preorder(root);
                    break;
                case 3:
                    Inorder(root);
                    break;
                case 4:
                    Postorder(root);
                    break;
                case 5:
                    Min_node(root);
                    break;
                case 6:
                    Max_node(root);
                    break;
                case 7:
                    if (Search_bst(root, input()))
                        System.out.println("Node is found");
                    else
                        System.out.println("Node is Not Found");
                    break;
                case 8:
                    System.out.println("Total Node= " + Count_node(root));
                    break;
                case 9:
                    System.out.println("Total Left Node= " + Count_left_subtree_node(root));
                    break;
                case 10:
                    System.out.println("Total Right Node= " + Count_right_subtree_node(root));
                    break;
                case 11:
                    System.out.println("Enter the Node That you want to delete: ");
                    int key = sc.nextInt();
                    Delete_node(root, key);
                    System.out.println("Node Delete Successfullt deleted......");
                default:
                    System.out.println("Invalid Choice");
            }
        } while (choice != 15);
    }
}
