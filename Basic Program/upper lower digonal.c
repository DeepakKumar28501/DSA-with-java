#include<stdio.h>

int main()
{
	int a[50][50],b[50][50],c[50][50],i,j,m,n;
	
	printf("\nenter the size of array\n");
	scanf("%d%d",&m,&n);
	printf("enter %d*%d element in the array in first array\n",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter %d*%d element in the array in second array\n",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("enter %d*%d element in the array in third array\n",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&c[i][j]);
		}
	}
	
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
			if(i<j)
			{
				a[i][j]=0;
			}
				if(i>j)
			{
				b[i][j]=0;
			}
				if(i<j || i>j)
			{
				
				c[i][j]=0;
				
				
			}
			
		}
	}
		printf("\n the lower trangular matrix are\n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%7d",a[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	printf("\n the upper trangular matrix are\n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%7d",b[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\n the digonal trangular matrix are\n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%7d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}

