#include<stdio.h>
int i,n;

int main()
{
int del(int a[],int,int);
	
int a[100],pos,b;
printf("\nenter how many element to be enter\n");
scanf("%d",&n);
printf("enter %d element in the array\n",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	}	
	printf("on which position element do you went to delete\n");
	scanf("%d",&pos);
     del(b,pos,n);
 return 0;
 }
 int del(int a[],int b,int pos,int n)
 {
 	int j,item;
 	item=a[pos];
 	for(j=pos;j<n;j++)
 	{
 		a[j]=a[j+1];
 		
	 }
	 n=n-1;
	 printf("\n New Array\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\n",a[i]);
	 	
	 }
	
 }
