//program to implement stack
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert();
void del();
void travers();
 int a[10],i=-1;
 void main()
 {
 int n;
 char ch;
 do
 {
 printf("\n\t enter your choice\n");
 printf("\t Press 1. for insertion\n");
 printf("\t Press 2. for deletion\n");
 printf(" \t Press 3. for traversing\n");
 printf("\t Press 4. for exit\n");
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
 casev 4:
 exit(0);
 default:
 printf("your choice is invalid please try again\n");
 }
 }
 while(n!=5);
 getch();
 }
 void insert();
{
if(i<=8)
{
printf("enter the no\n");
while(i<=8)
{
i++;
scanf("%d",&a[i]);
}
}
else
{
printf("the array is full,overfull\n");
}
}

void del()
{
int item,j,flag=0,pos;
printf("enter the item value to be delete\n");
scanf("%d",&item);
for(j=0;j<=1;j++)
{
if(a[j]=item)
{
flag=1;
pos=j;
}
}
if(flag)
{
a[j]=a[j+1];
}
i--;
}
else
{
printf("the is not in array\n");
}
}
void travers()
{
int j;
for(j=0;j<=1;j++)
{
printf("%d\n",a[j]);
}
}