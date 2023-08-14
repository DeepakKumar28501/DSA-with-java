#include<stdio.h>
#include<conio.h>
int i,len,pos,num;
void insert (int a[],int,int,int);
int main()
{
	int a[100];

	printf("Enter integer to be read\n");
	scanf("%d",&len);
	printf("enter integer\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter position in the array for insrtion\n");
	scanf("%d",&pos);
	printf("enter integer to be insertion\n");
	scanf("%d",&num);
	--pos;
	insert(a,pos,len,num);
return 0;
	
}
void insert (int a[],int len,int pos,int num)
{
	for(i=len;i>=pos;i--)
	{
	a[i+1]=a[i];	
	}
	a[pos]=num;
	if(pos>len)
	{
		printf("\n insertion outside the array\n");
		
	}
	len++;
	printf("NEw Araay\n");
	for(i=0;i<len;i++)
	{
		printf("%d\n",a[i]);
	}
}
