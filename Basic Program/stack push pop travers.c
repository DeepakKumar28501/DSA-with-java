#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void travers();
#define maxsize 50
int stk[maxsize];
int item,top=-1;
void main()
{
	int choice;
	char ch;
	do
	{printf("\n");
	     printf("\n\t* * * * * * * * * * Enter Your Choice * * * * * * * * * *\n");
		printf(" \tPress 1.* * *  Push * * * \n");
		printf(" \tPress 2.* * *  Pop  * * * \n");
		printf(" \tpress 3.* * * travers * * *\n");
		printf(" \tPress 4.* * * Exit * * *\n\t");
		scanf("%d",&choice);
		switch(choice)
    {
    	case 1:
    	push();
    	break;
    	case 2:
    	pop();
    	break;
    	case 3:
    	travers();
    	break;
    	case 4:
    	exit(0);
    	default:
    	printf("\n\t* * * * Your Choice Is Invalid Please Try Again * * * *\n");
    }
    	printf("\n \t* * Want to continue Press Y or N * *\n");
    	  ch=getch();
    	  
	}while(ch=='y' || ch=='Y');
	
	getch();
	
	
}

void push()
{
	if(top==maxsize-1)
	{
		printf("\tStack is Overflow\n");
		
	}
	else
	{
		printf("\tEnter The Value Want to Push\n");
		scanf("%d",&item);
		top=top+1;
		stk[top]=item;
		printf("\tThe Element %d push Successfuly\n",item);
	}
}

void pop()
{
	if(top==-1)
	{
		printf("\tStack Is Empty/ Underflow\n");
		
	}
	else
	{
		item=stk[top];
		top=top-1;
		printf("\tThe Element %d Successfully Removed\n",item);
		
	}
}

void travers()
{
  int i;
  if(top==-1)
  {
  	printf("\tstack is Empty\n");

  	
  }
  else
  {
  	printf("\tTravering Of stack\n");
  	for(i=top;i>=0;i--)
  	{
  		printf("%d\n",stk[i]);
	  }
  }
}
