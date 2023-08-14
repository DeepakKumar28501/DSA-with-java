//program  to insert a new Node at the beginning of a singly linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct  node
{
int data;
struct  node *next;
}*head;
void createList(int n);
void insertNodeAtBeginning(int data);
void displayList();
int main()
{
int n,data;
printf("\n Enter the total numbers of node:");
scanf("%d",&n);
createList(n);
printf("\n Data in the list\n");
displayList();
printf("\nEnter data to insert at beginnning of the list");
scanf("%d",&data);
insertNodeATBeginning(data);
printf("\nData in the list\n");
displayList();
return 0;
}
 void createList(int n)
 {
 struct node *newNode,*temp;
 int data,i;
head=(struct node*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("\nunable to allocate memory");
}
else
{
printf("\nEnter the data of node 1:");
scanf("%d",&data);
head->data=data;
head->next=NULL;
temp=head;

for(i=2;i<=n;i++)
{
newNode=(struct node*)malloc(sizeof(struct node));
if(newNode==NULL)
{
printf("unable to alloctes memory\n");
break;
}
else
{
printf("\nEnter the data of node:");
scanf("%d",&data);
newNode->data=data;
newNode->next=NULL;
temp->next=newNode;
temp=temp->next;
}
}
printf("\nSingly linked list create successfully\n");
}
}

void insertATBeginning(int data)
{
struct node *newNode;
newNode=(struct node*)malloc(sizeof(struct node));
if(newNode==NULL)
{
printf("\nunable to alloctes memory.\n");
}
else
{
newNode->data=data;
newNode->next=head;
head=newNode;
printf("\nDATA INSERTED SUCCESSFULLY ");
}
}

void displayList()
{
struct node *temp;
if(head==NULL)
{
printf("\nlist is empty\n");
}
else
{
temp=head;
while(temp!=NULL)
{
printf("Data=%d\n",temp->data);
temp=temp->next;
}
}
}
