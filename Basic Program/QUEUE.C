#include<stdio.h>>
#include<conio.h>
#include<stdlib.h>

#define maxsize 20
int queue[maxsize],front=-1	,rear=-1,item;

void insert();
void del();
void traverse();
void count();

int main()
{
	int choice;
	char ch;
	
	do
	{
		printf("\n* * * * * Please Enter Your choice * * * * *");
		printf("\nPress 1 For Insertion");
		printf("\nPress 2 For Deletion");
		printf("\nPress 3 for Traversing");
		printf("\nPress 4 For counting The Total Element");
		printf("\nPress 5 For exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
		
			case 1:
				insert();
				break;
			case 2:
			    del();
			    break;
			case 3:
				traverse();
				break;
			case 4:
				count();
				break;
			case 5:
				exit(0);
			default:
				printf("\n* * * Your choice invalid Please Enter right choice");
	}
	printf("\n * * * * Went to continue Press Y and For Exit  N\n");
	ch=getche();
	
	}while(ch=='Y'||ch=='y');
	return 0;
}


	void insert()
	{
		int i,eno;
		if(front==-1 && rear==maxsize-1)
		{
			printf("\nQueue Is Full");
		}
		else
		{ 
		printf("\n Enter no of Element to be insert(maximum 20)\n");
		scanf("%d",&eno);
				printf("\n Enter element ");
			for(i=1;i<=eno;i++)
			{
			
		
			scanf("%d",&item);
			if(front==-1 && rear==-1)
			{
				front=front+1;
				rear=rear+1;
			}
			else
			{
				rear=rear+1;
			}
			queue[rear]=item;
			
		}
		printf("\n The %d is Successfully insert ",item);
		}
	}
	
	
	
	
	void del()
	{
		if(front==-1 && rear==-1)
		{
			printf("\n Queue IS Empity");
			
		}
		else
		{
			item=queue[front];
			printf("\nThe %d is Successfully Delete",item);
			if(front==rear)
			{
				front=-1;
				rear=-1;
			}
			else
			{
				front=front+1;
			}
		}
	}
	
	
	
	void traverse()
	{  
	int i;
			if(front==-1 && rear==-1)
		{
			printf("\n Queue IS Empity");
			
		}
		else
		{
			for(i=front;i<=rear;i++)
			{
				printf("\n%d",queue[i]);
			}
		}
	}
	
	void count()
	{
		int count=0,i;
			if(front==-1 && rear==-1)
		{
			printf("\n Queue IS Empity");
			
		}
		else
		{
		for(i=front;i<=rear;i++)
		{
			count++;
		}
		printf("\n%Total element in the Queue=%d",count);
				}
	}
