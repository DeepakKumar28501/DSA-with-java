#include<stdio.h>

int main()
{
	int a[50][50],m,n,i,j,flag;
	printf("\nenter the order of the matrix to be enter\n");
	scanf("%d%d",&m,&n);
	printf("enter the %d*%d element in the array\n",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%s",&a[i][j]);
		}
	}
	flag=1;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]-a[i][j]!=0)
			{
				flag=0;
				break;
			}
		}
	}
	if(flag=0)
	{
		printf("symmetrical matrix\n");
	}
	else
	{
		printf("Matrix not a symmetric\n");
		
	}
	return 0;
}
