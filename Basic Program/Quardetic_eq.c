#include<stdio.h>
#include<conio.h>
// find the root of x^2+10x-c
int main(){
	float a,b,c,x1,x2,d,fpart,spart;
	printf("Enter the coefficient of x^2 and Cefficient of x and constant c Value :");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0){
		//here both root are same and real
		x2=x1=-b/(2*a);//calculating using these formulas
		printf("The roots are real and equal and they are x1=%3.2f\nx2=%3.2f",x1,x2);
		
	}
	else if(d>0){
		//Here the roots are real and distinct
		x1=-b/(2*a)+sqrt(d)/(2*a);
		x2=-b/(2*a)-sqrt(d)/(2*a);
		printf("The roots are real and Distinct And They Are x1=%3.2f\nx2=%3.2f",x1,x2);
		
	}else//d>0
	{
	fpart=-b/(2*a);
	spart=sqrt(-d)/(2*a);
	printf("The roots are Imaginary distinct and the are like x1=%3.2f+i%3.2f\nx2=x1=%3.2f-i%3.2f",fpart,spart,fpart,spart);
		
	}
	return 0;
}
