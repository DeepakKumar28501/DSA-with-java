#include<stdio.h>
int main(){
	int a[10],n,i,flag=0;
	printf("Enter 10 array elements\n");
	for(i=0;i<9;i++){
		scanf("%d\n",&a[i]);
		
	}
	printf("enter your searching element\n");
	scanf("%d",&n);
	for(i=0;i<9;i++){
		if(a[i]==n)
			flag=1;
			break;
		
	}
		if(flag)
		printf("YOUR INPUT ELEMENT  FOUND");
		else
		printf("your element is not found");
	return 0;
	
}
