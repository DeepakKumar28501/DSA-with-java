#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
struct node
{int num;
struct node*next;
}*start=NULL;
typedef struct node NODE;
NODE *p,*first=NULL,*p,*temp;
int count=0;
char choice;
clrscr();
do
{
p=(NODE*)malloc(sizeof(NODE));
printf("\nenter the data item");
scanf("%d",&p->num);
if(p==NULL)
{
p->next=start;

start=p;
}
else
{q=start;
while(q->next!=NULL)
{
q=q->next;
}
p->next=q->next;
q->next=p;
}
printf("\n Do you went to continue(type y or n) ?\n");
scanf("%c",&choice);
}
while((chice=='Y')||(chice=='y'));
printf("\nStatus of the linked list is\n");
while(temp!=NULL)
{
	printf("%d\n",temp->num);
	count++;
	temp=temp->next;
	}
	printf("\n No node of nodes in the list=%d\n",count);
	getch();
	}

