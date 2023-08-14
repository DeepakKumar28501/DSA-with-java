#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define maxsize 20
int cqueue[maxsize],front=-1	,rear=-1,item;
void search();
void insert();
void del();
void traverse();
void count();

int main()
{
	int choice,i;
	char ch;
	
	do
	{
		printf("\n* * * * * Please Enter Your choice * * * * *");
		printf("\nPress 1 For Insertion");
		printf("\nPress 2 For Deletion");
		printf("\nPress 3 for Traversing");
		printf("\nPress 4 For counting The Total Element");
		printf("\nPress 5 For Searching");
		printf("\nPress 6 for exit\n");
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
				search();
				break;
			case 6:
				exit(0);
			default:
				printf("\n* * * Your choice invalid Please Enter right choice");
	}

	for(i=1;i<120;i++)
		{
					printf("_+_");
				}	printf("\n * * * * Went to continue Press Y and For Exit  N\n");
	ch=getche();
	
	}while(ch=='Y'||ch=='y');
	return 0;
}


	void insert()
	{
		int i,eno;
		if(front==rear+1%maxsize-1 && rear==(front+1)%maxsize)
		{
			printf("\nCQueue Is Full");
		}
		else
		{
		for(i=1;i<120;i++)
		{
					printf("__");
				}
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
				rear=(rear+1)%maxsize;
			}
			cqueue[rear]=item;
			
		}
		for(i=1;i<=eno;i++)
		{
			printf("\n The %d is Successfully insert ",eno);;
		}
		}
	}
	
	
	
	
	void del()
	{
		int i;
		if(front==-1)
		{
			printf("\n CQueue IS Empity");
			
		}
		else
		{
			item=cqueue[front];
			printf("\nThe %d is Successfully Delete",item);
				for(i=1;i<120;i++)
		{
					printf("__");
				}
			if(front==rear)
			{
				front=-1;
				rear=-1;
			}
			else
			{
				front=(front+1)%maxsize;
			}
		}
	}
	
	
	
	void traverse()
	{  
	int i;
			if(front==-1 && rear==-1)
		{
			printf("\n CQueue IS Empity");
			
		}
		else
		{
			for(i=front;i<=rear;i++)
			{
				printf("\n%d",cqueue[i]);
			}
		}
	}
	
	void count()
	{
		int count=0,i;
			if(front==-1 && rear==-1)
		{
			printf("\n CQueue IS Empity");
			
		}
		else
		{
		for(i=front;i<=rear;i++)
		{
			count++;
		}
			for(i=1;i<120;i++)
		{
					printf("__");
				}
		printf("\n%Total element in the CQueue=%d",count);
				}
	}
	
	void search()
	{
		int middle,loc,end=maxsize-1,beg=0,i,temp;
			if(front==rear+1%maxsize-1 && rear==(front+1)%maxsize)
		{
			printf("\nCQueue Is Full");
		}
		else
		{
			for(i=front;i<=rear;i++)
			{
				if(cqueue[i]>cqueue[i+1])
				{
					temp=cqueue[i];
					cqueue[i]=cqueue[i+1];
					cqueue[i+1]=cqueue[i];
				}
			}
			
    printf("\nEnter element to be search: ");
    scanf("%d", &item);
    beg= front;
    end= rear;
    middle = (beg+end)/2;
    while(beg <= end)
    {
        if(cqueue[middle]<item)
            beg= middle+1;
        else if(cqueue[middle]==item)
        {
            printf("\nThe number, %d found at Position %d", item, middle+1);
            break;
        }
        else
            end = middle-1;
        middle = (beg+end)/2;
    }
    if(beg>end)
        printf("\nThe number, %d is not found in given Array", item);
		}
		
	}
