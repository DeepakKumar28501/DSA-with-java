#include<stdio.h>
#include<string.h>
int main(){
	int a[10]={3,5,3,7,8,6,5,5,56,87},n,flag=0,i;
	printf("Enter any Numebr to be deleted:");
	scanf("%d",&n);
	
	for(i=0;i<10;i++){
		if(n==a[i])
		   flag=1;
		if(flag==1){
			a[i]=a[i+1];
		}   
	}
	if(!flag){
		printf("%d not found",n);
	}else{
		for(i=0;i<9;i++){
		printf("%d\t",a[i]);
	}
	}
	
}
