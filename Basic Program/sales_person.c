#include<stdio.h>
int main(){
	int sale[4][3],i,j;
	float amt[5],cost[4];
	for(i=0;i<5;i++){
		printf("\n Enter %d Person 4 item:",i+1);
		for(j=0;j<4;j++){
			scanf("%d",&sale[i][j]);
		}
	}	
	
	printf("\n enter cost 4 items:");
	for(i=0;i<4;i++){
		scanf("%f",&cost[i]);
	}
	
	for(i=0;i<5;i++){
		amt[i]=0;
		for(j=0;j<4;j++){
			amt[i]+=sale[i][j]*cost[j];
		}
	}
	
	for(i=0;i<5;i++){
		printf("\n%d person total Amount=%f",i+1,amt[i]);
	}
	
	
}
