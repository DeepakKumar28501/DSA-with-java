#include<stdio.h>
int main(){
	int sale[4][3],ttl_person[4],ttl_item[3],i,j,sum;
	for(i=0;i<4;i++){
		printf("\n Enter %d Person  of 3 item sale:",i+1);
		for(j=0;j<3;j++){
			scanf("%d",&sale[i][j]);
		}
	}	
	
	for(i=0;i<4;i++){
		ttl_person[i]=0;
		for(j=0;j<3;j++){
			ttl_person[i]+=sale[i][j];
		}
		printf("%d person total sale=%d\n",i+1,ttl_person[i]);
	}
		printf("\n");
		for(j=0;j<3;j++){
			ttl_item[j]=0;
			for(i=0;i<4;i++){
			ttl_item[j]+=sale[i][j];
			}
			printf("%d item total sale=%d\n",j+1,ttl_item[j]);
		}
		
		
	
	
	
}
