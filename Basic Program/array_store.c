#include<stdio.h>
// int main(){
// 	int a[4][5],i,j;
// 	for(i=0;i<4;i++){
// 		printf("-----------------------------------\n");
// 		for(j=0;j<5;j++){
// 			
// 			printf("|(%d%d)| ",i,j);
//		 }
//		 printf("\n");
//	 }
//	 printf("-----------------------------------\n");
// }

 int main(){
 	int a[4][5],i,j,temp;
 	printf("Enter 20 integer element\n");
 	for(i=0;i<4;i++){
 		
 		for(j=0;j<5;j++){
 			scanf("%d",&a[i][j]);
 			
		 }
		
	 }
	 
	 // its part of bubble short
	 for(i=0;i<3;i++){
 		
 		for(j=0;j<4-i-1;j++){
 			if(a[i][j]>a[i][j+1])
			 {
 				temp=a[i][j];
 				a[i][j]=a[i][j+1];
 				a[i][j]=temp;
			 
			}
 			
		 }
		
	 }
	 
	 
	 printf("Your input number are\n");
	 for(i=0;i<4;i++){
 		
 		for(j=0;j<5;j++){
 			printf("%d ",a[i][j]);
 			
		 }
		 printf("\n");
		
	 }
	 
 }
