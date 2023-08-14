// program to implement linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
void insert_begin();
void insert_end();
void travers();
int item;
void delbeg();
void delend();
struct node
{
int num;
struct node*next;
};

typedef struct node NODE;

NODE*start=NULL;
int main()
{
int choice;
char ch;

do
{
printf("\n Press 1.for insert element at begin");
printf("\n Press 2. for insrert element at end");
printf("\n Press 3. for traverse a linked list");
printf("\n /Press 4.for deletion from begin");
printf("\n Press 5. for deletion from end");
printf("\nPress 6 for exit");
printf("\nenter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert_begin();
break;
case 2:
insert_end();
break;
case 3:
travers();
break;
case 4:
delbeg();
break;
case 5:
delend();
break;
case 6:
exit(0);
break;
default:
printf("\n your choice is invalid please try again\n");
break;
}
printf("do you want to continue press y or n\n");
ch=getch();
}while(ch=='y'||'Y');

}
void travers()
{
NODE*p;
fflush(stdin);
p=start;
if(p==NULL)
{
printf("there is no nodei n linked list\n");
}
else
{
while(p!=NULL)
{
printf("%d\n",p->num);
p=p->next;
}
}
}


void insert_begin()
{
NODE*p;
printf("enter the item value want to be insert");
scanf("%d",&item);
fflush(stdin);
p=(NODE*)malloc(sizeof(NODE));
p->num=item;
if(start==NULL)
{
p->next=NULL;
start=p;     //q=p
}
else
p->next=start;
start=p;
}


void insert_end()
{
NODE*p,*loc;
printf("enter the value want to be insert\n");
scanf("%d",&item);
p=(NODE*)malloc(sizeof(NODE));
p->num=item;
p->next=NULL;
if(start==NULL)
start=p;
else
{
loc->next=p;
}
}


void delbeg()
{
NODE*p;
if(start==NULL)
return;
else
{
p=start;
start=start->next;
printf("item deleted %d\n",p->num);
free(p);
}
}


void delend()
{
NODE*p,*loc;
if(start==NULL)
return;
else
if(start->next==NULL)
{
p=start;
start=NULL;
printf("item deleted %d\n",p->num);
free(p);
}
else
{
loc=start;
p=start->next;
while(p->next==NULL)
{
loc=p;
p=p->next;
}
loc->next=NULL;
free(p);
}
}
