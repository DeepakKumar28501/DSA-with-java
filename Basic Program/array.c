#include<stdio.h>
int main()
{
	int a[10],b[10],sum_of_digit,rev=0,rem,i;
	printf("Enter 10 Element of array\n");
	
	for(i=0;i<9;i++){
		scanf("%d\n",&a[i]);
	}
	
	printf("\n");
	for(i=0;i<10;i++){
		sum_of_digit=0;
		if(a[i]%2==0){
			while(a[i]>0){
				rem=a[i]%10;
				sum_of_digit=sum_of_digit+rem;
				a[i]=a[i]/10;
			}
			b[i]=sum_of_digit;
		}
		else
		{
			rev=0;
			while(a[i]>0){
				rem=a[i]%10;
				rev=rev*10+rem;
				a[i]=a[i]/10;
			}
			b[i]=rev;
		}
	}
	for(i=0;i<10;i++){
		printf("%d\t",b[i]);
	}
	return 0;
	
}
