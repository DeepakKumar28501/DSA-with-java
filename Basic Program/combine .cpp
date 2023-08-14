#include<stdio.h>

void insert();
void del();
void travers();
void merged();
int a[20],i=-1;

int main()
{
	int n;
	do
	{
		printf("\a\a\a* * * * * * * * * * You Choice Are * * * * * * * * * *\n");
		printf("Press 1. for insert\n");
		printf("Press 2. for Delete\n");
		printf("Press 3. for traverse\n");
		printf("Press 4. for merged\n");
		
		printf("Now enter Your Choice :\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				insert();
				break;
			case 2:
				del();
				break;
			case 3:
				travers();
				break;
			case 4:
			 merged();
			 break;
			case 5:
			   break;
			default:
				printf("\a\a\a\a\ayour choice is invalid\n");
				
		
		}
	}
while(n!=5);
return 0;


}
void insert()
{
	if(i<=8)
	{
		printf("enter the number\n");
		while(i<=8)
		{
			i++;
			scanf("%d",&a[i]);
		}
	}
	else
	{
		printf("The array is Full\n");
		
	}
}
//logic of deletion
void del()
{
	int item,j,flag=0,pos;
	printf("Enter the number to delete :");
	scanf("%d",&item);
	for(j=0;j<=1;j++)
	{
		if(a[j]=item)
		{
			
		}
	}
}
