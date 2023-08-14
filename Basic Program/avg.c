#include<stdio.h>
int main()
{
	void average(int);
	int s;
	printf("Enter any no:\n");
	scanf("%d",&s);
	average(s);
	return 0;
}
void average(int n)
{
	float avg=0,su=0;
	int r,count=0;
	while(n>0)
	{
		count++;
		r=n%10;
		su+=r;
		n=n/10;
	}
	
	avg=su/count;
	printf("Average=%f",avg);
}

