#include<stdio.h>
int main(){
    int a[10],i,rem,sum,b[10],rev;
    
    for(i=0;i<6;i++)
	{
        printf("element%d:",i);
        scanf("%d",&a[i]);
    }
    printf("new array");
    for(i=0;i<6;i++)
	{
        sum=0;
        if(i%2==0)
		{
            while(a[i]>0)
			{
            rem=a[i]%10;
            sum=sum+rem;
            a[i]/10;
            }
         	b[i]=sum;
        }
        else
		{
        rev=0;
        	while(a[i]>0)
			{
            	rem=a[i]%10;
            	rev=rev*10+rem;
            	a[i]/10;
        	}
        	b[i]=rev;
    	}		
	}
	for(i=0;i<6;i++)
	{
		printf("%d\t",b[i]);
    }
}
