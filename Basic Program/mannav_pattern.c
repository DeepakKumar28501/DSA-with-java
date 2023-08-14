#include<stdio.h>
int main(){
    int i,j,n=50;

   for(i=1;i<=n;i++){
    for(j=1;j<=n+i-1;j++)
    {
    	if(j<=n-i){
    		printf(" ");
		}else{
			if(i%2==0){//even
				if(j%2==0){
					printf("*");
				}else{
					printf(" ");
				}
			}else{//odd 
				if(j%2==0){
					printf(" ");
				}else{
					printf("*");
				}	
			}
				
		}
       
    }
    printf("\n");
   }
    
}
