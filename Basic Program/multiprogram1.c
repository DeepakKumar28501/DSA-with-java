#include<stdio.h>

//int main(){
//	int x=66;
//	float y=3593.732;
//	printf("%d\n",x);
//	printf("%6d\n",x);
//	printf("%-7d\n",x);
//	printf("%6d%-7d\n",x,x);
//	printf("%f\n",y);
//	printf("%7.3f\n",y);
//	printf("%-7.2f\n",y);
//	printf("%6d%3.2f\n",x,y);
//	printf("%-6d%-12.2f%-7d\n",x,y,x);
//return 0;	
//}

//int main(){
//	float a,b,x;
//	printf("Enter The coeficient of x and the constant Value :");
//	scanf("%f%f",&a,&b);
//	x=-b/a;
//	printf("The root of the Linear Equation %3.2fx+%3.2f=0 is %3.2f",a,b,x);
//	return 0;
//}

//int main(){
//	float x,y;
//	printf("Enter value of x :");
//	scanf("%f",&x);
//	if(x>=0)
//		y=x*x-10*x-2;
//	else
//		y=-1*x;
//	printf("y=%f",y);
//	return 0;
//}

//#include<math.h>
//int main(){
//	float a,b,c,x1,x2,d,fpart,spart;
//	printf("Enter the cofficient of x^2,cofficient of x and constant c value:");
//	scanf("%f%f%f",&a,&b,&c);
//	
//	d=b*b-4*a*c;
//	if(d==0){
//		x1=-b/(2*a);
//		x2=-b/(2*a);
//		printf("The roots are real equal and they are %3.2f,%3.2f",x1,x2);
//	}
//	else if(d>0)
//	{
//		x1=-b/(2*a)+sqrt(d)/(2*a);
//		x2=-b/(2*a)-sqrt(d/(2*a));
//		printf("The roots are Real,distinct and they are %3.2f,%3.2f",x1,x2);
//	}
//	else{ //d<0
//	fpart=-b/(2*a);
//	spart=sqrt(-d/2*a);
//	printf("The roots are imaginary,distinct and they are %3.2f+i%3.2f,%3.2f-i%3.2f",fpart,spart,fpart,spart);
//		
//}
//	return 0;
//	
//}

#include<math.h>
int main(){
	float y;
	int x;
	
	printf("Enter the value of x and y");
	scanf("%d%f",&x,&y);
	if(x==0){
		y=0;
	}
	else if(x%2==0){
		if(x>0){
			y=y+1/sqrt(1+x*x);
		}else{
			y=1/sqrt(1+x*x);
		}
	}else{
		if(x>0){
			y=1-1/sqrt(1+x*x);
		}else{
			y=1/sqrt(1+x*x);
		}
	}
	printf("y=%5.2f",y);
	return 0;
}


