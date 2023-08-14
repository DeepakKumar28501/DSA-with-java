#include<stdio.h>
int main(){
	int i,j;
		for(i=1;i<=7;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||i==7)
			{
				if(j<=3){
					printf("*");
				}else{
					printf(" ");
				}
			
			}
			else if(i==6||i==2){
				if(j==1||j==4){
					printf("*");
				}else{
					printf(" ");
				}
			}
			else{
				if(j==1||j==5){
					printf("*");
				}else{
					printf(" ");
				}
			}
			
		}
		printf("\n");
	}
}
