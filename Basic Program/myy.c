#include<stdio.h>
int main(){
	int i,j;
		for(i=1;i<=7;i++)
	{
		for(j=1;j<=24;j++)
		{
			if(i==1||i==7){
				if(j>=7 && j<=9||j==17){
					printf(" ");
				}else{
					printf("*");
				}
			}
			
			if(i==2||i==6)
			{
				
				if(j==1||j==7||j==10||j==18)
				{
					
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			
		 if(i==3||i==5){
				
				if(j==1||j==8||j==10||j==18){
					
					printf("*");
				}else{
					printf(" ");
				}
			}
			if(i==4){
				if(j>=2&&j<=7||j==9||j==17){
					
					printf(" ");
				}else{
					printf("*");
				}
			}
	}
//		}	printf("\n%d=",i);
		printf("\n");
	}
}
