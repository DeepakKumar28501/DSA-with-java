#include<stdio.h>

int main(){
	int n=15,i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i>=3 &&i<n){
				if(j==1||j==i){
						printf("*");
				}
				else
				{
						printf(" ");
				}
			}
			else
			{
					printf("*");
			}
			
		}
			printf("\n");
	}
	return 0;
}


//int main(){
//	int n=100,i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=n;j>=i;j--)
//		{
//			printf("*");		
//		}
//		printf("\n");
//	}
//}

//int main(){
//	int n=6,i,j;
//	for(i=1;i<=n;i++)
//	{
//			printf("%d=",i);
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",i);		
//		}
//		printf("\n");
//	}
//}
