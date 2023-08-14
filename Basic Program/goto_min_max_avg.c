//#include<stdio.h>
//int main(){
//	int n,count,min,max=1,sum=0;
//	float avg;
//	printf("Enter 1st Number :");
//	scanf("%d",&n);
//	min=n;
//	sum=n;
//	count++;
//	st:
//		count++;
//		printf("\nEnter %dth number :",count);
//		scanf("%d",&n);
//		if(min>n)
//		{
//			min=n;
//		}
//		if(max<n){
//			max=n;
//		}
//		sum=sum+n;
//		if(count<10) goto st;
//		avg=(float)sum/10;
//		printf("\n Average of 10 Number=%f",avg);
//		printf("\nMin=%d\nMax=%d",min,max);
//		return 0;
//		
//}

#include<stdio.h>
int main(){
	int n;
	
	printf("Enter the number of month :");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("\nYour input number Month= January");
			break;
		case 2:
			printf("\nYour input number Month= February");
			break;
		case 3:
			printf("\nYour input number Month= March");
			break;
		case 4:
			printf("\nYour input number Month= April");
			break;
		case 5:
			printf("\nYour input number Month= May");
			break;
		case 6:
			printf("\nYour input number Month= June");
			break;
		case 7:
			printf("\nYour input number Month= July");
			break;	
		case 8:
			printf("\nYour input number Month= August");
			break;
		case 9:
			printf("\nYour input number Month= September");
			break;
		case 10:
			printf("\nYour input number Month= Octmber");
			break;
		case 11:
			printf("\nYour input number Month= November");
			break;	
		case 12:
			printf("\nYour input number Month= December");
			break;
		default:
			printf("\n You Input invalid number Please try again");						
			
	}
	
	return 0;
}
