#include<stdio.h>
int main(){
	int x,temp,a,num;
	printf("Enter any number..:");
	scanf("%d",&x);
	num=x;
	while(x!=0){
		temp=x%10;
		a=a+temp*temp*temp;
		x=x/10;
		
	}
	printf("\n%d",a);
	if(a==num){
		printf("\nYour input number is Armstrong");
	}else{
		printf("\nYour input number is not Armstrong");
	}
	return 0;
}
