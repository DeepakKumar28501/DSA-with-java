#include<stdio.h>
int main()
{
	int count_even=0,count_odd=0,sum_even,sum_odd,count,n;
	float avg_even=0,avg_odd=0;
	
	printf("Enter 1st Number :");
	scanf("%d",&n);
	count++;
	goto ft;
//	if(n%2==0){
//			sum_even=sum_even+n;
//			count_even++;
//			
//		}
//		else{
//			sum_odd=sum_odd+n;
//			count_odd++;
//		}
	st:
		count++;
		printf("Enter %dth number :",count);
		scanf("%d",&n);
		ft:
		if(n%2==0){
			sum_even=sum_even+n;
			count_even++;
			
		}
		else{
			sum_odd=sum_odd+n;
			count_odd++;
		}
		
		if(count<20) goto st;
		printf("\nSum of EVEN Numbers=%d",sum_even);
		printf("\nSum of ODD Numbers=%d",sum_odd);
		printf("\nTotal ODD Number=%d",count_odd);
		printf("\nTotal EVEN Number=%d",count_even);
		printf("\nTotal input Numbers%d",count);
		count_odd!=0?avg_odd=(float)sum_odd/count_odd: avg_odd;
		count_even!=0?avg_even=(float)sum_even/count_even: avg_even;
		
		printf("\nAverage of EVEN Numbers=%5.2f",avg_even);
		printf("\nAverage of ODD Numbers=%5.2f",avg_odd);
		return  0;
}
