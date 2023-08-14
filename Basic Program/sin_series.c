#include<stdio.h>
int main(){
	int x,n,s,j,i;
	printf("Enter Sin Angal :");
	scanf("%d",&x);
	printf("Enter Number Of terms :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			s=s+j;
		}
	}
	
	printf("\nSin%d=%d",x,s);

}
