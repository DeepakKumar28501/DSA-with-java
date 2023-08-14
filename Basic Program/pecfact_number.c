//#include<stdio.h>
//int main()
//{
//	int n,i=1,temp=0;
//	printf("ENTER ANY INTERGER NUMBER :");
//	scanf("%d",&n);
//	while(n>i)
//	{
//		
//		if(n%i==0){
//			temp=temp+i;
//			printf("*%d*\n",i);
//			printf("%d",temp);
//		}
//		i++;
//		
//	}
//	if(n==temp)
//		printf("\nThe Number %d is Perfact Number",n);
//	else{
//	printf("\nThe Number %d is Not Perfact Number",n);
//	}
//	
//}


#include <stdio.h>

int main(){
    int number=1, i, sum=0;

    while(number<=1000){

        for(i=1; i<number; i++){
            if(number%i==0){
                sum+=i;
            }
        }

        if(sum==number){
            printf("%d is perfect\n", number);
        }
        number++;
    }

    return 0;   
}






//#include<stdio.h>
//int main()
//{
//	int i=1,temp=0;
//	long n=2;
//	st:
//	while(n>i)
//	{
//		
//		if(n%i==0){
//			temp=temp+i;
//			
//		}
//		i++;
//		
//	}
//	if(n==temp)
//		printf("\nThe Number %d is Perfact Number",n);
//		
//	n=1;	
//	n++;	
//		if(n<1000000) goto st;
//	
//	
//}
