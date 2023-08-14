#include<stdio.h>
#include<stdlib.h>
typedef struct BST_tree
{
   int data;
   int *left;
   int *right; 
}NODE;

NODE * create(int item){
    NODE *node = (NODE *)malloc(sizeof(NODE));
    node->data=item;
    node->left=NULL;
    node->right=NULL;
}
 NODE *insert(NODE *root,int item){
    if(root==NULL){
        return create(item);
    }else{
        if(item<root->data){
            root->left=insert(root->left,item);
        }else{
            root->right=insert(root->right,item);
        }
    }
    return root;
 }

 void inorder(NODE *root){
    if(root==NULL)
        return;
        inorder(root->left);
        printf("%d  ",root->data);
        inorder(root->right);
 }
 void pre_order(NODE * root){
    if(root==NULL)
        return;
        printf("%d  ",root->data);
        inorder(root->left);
        inorder(root->right);
 }

 void post_order(NODE * root){
    if(root==NULL)
        return;
        inorder(root->left);
        inorder(root->right);
        printf("%d  ",root->data);
 }


 int input_node(){
    int item;
    printf("\n Enter the Value that you want to insert: ");
    scanf("%d",&item);
    return item;
 }

 int check_null(NODE *root){
    if(root==NULL){
        printf("\nBst have no node...");
        return 0;
    }
    else 
        return 1;
 }


int main(){
    NODE *root=NULL;
    int choice;
    do{1                AQ1             ``
        printf("\nChoose Opertion to be performe.....");
        printf("\nPress 1 for insert node");
        printf("\nPress 2 for Traverse Inorder");
        printf("\nPress 3 for Traverse Preorder");
        printf("\nPress 4 for Traverse Postorder");
        printf("\nPress 5 for exit:\n\t:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                
                root=insert(root,input_node());
                break;
            case 2:
            printf("\n IN-Order Formate: ");
                if(check_null(root))
                    inorder(root);
                break;
            case 3:
            printf("Pre-Order Formate: ");
                if(check_null(root))
                    pre_order(root);
                break;
            case 4:
            printf("\n Post-Order Formate: ");
                if(check_null(root))
                    post_order(root);
                break;
            case 5:
                exit(0);
            default:
                printf("\ninvalid Choice try agian right choice");
        }

            
    }while(1);

    
}
