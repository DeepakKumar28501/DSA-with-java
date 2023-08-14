//Program to mplement the inorder preorder and post order traversal
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left;
struct node*right;
};
// Create a new node
struct node*createnode(value)
{
struct node*newnode=malloc(sizeof(struct node));
newNode->data=value;
newNode->left=NULL;
newNode->right=NULL;
return newNode;
}
//inorder traversal
void inorder(struct node*root)
{
if(root==NULL)return;
inorder(root->left);
printf("%d->",root->data);
inorder(root->right);
}
//preorder traversal
