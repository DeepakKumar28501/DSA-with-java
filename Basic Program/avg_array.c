#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],sum_even=0,sum_odd=0,m=0,n=0,i;
	float avg_even,avg_odd,avg_ori=0;
	printf("Enter 10 Element of array\n");
	for(i=0;i<9;i++){
		scanf("%d\n",&a[i]);
	}

	for(i=0;i<9;i++){
		if(a[i]%2==0){

			sum_even+=a[i];
			m++;
		}else{

			sum_odd+=a[i];
			n++;
		}
	}

	avg_even=(float)sum_even/m;
	avg_odd=(float)sum_odd/n;
	avg_ori=(float)(sum_even+sum_odd)/(m+n);
	if(avg_even>avg_odd && avg_even>avg_ori){
		
		printf("\nEven element average are Greater =%f",avg_even);
	}
	else if(avg_odd>avg_even && avg_odd>avg_ori){
	printf("\nOdd element average are Greater =%f",avg_odd);
	}
	else{
		printf("\nOriginal element average are Greater =%f",avg_ori);
	}

}
