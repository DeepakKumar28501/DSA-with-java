#include<stdio.h>
int main()
{
	int sum=0,num,rem;
	printf("Enter any elemnt:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
		if(num==0){
			num=sum;
			sum=0;
			
		}
	}
	
	printf("sum=%d",sum);
}
