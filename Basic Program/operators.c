#include<stdio.h>
int main(){
	int x=5,y=6,p;
	
	//arithmetic opertor
	p=x+y;
	printf("%d\n",p);
	p=x-y;
	printf("%d\n",p);
	p=x*y;
	printf("%d\n",p);
	p=(float)x/y;
	printf("%d\n",p);
	p=x%y;
	printf("%d\n",p);
	
	//relational opertor
	p=x<y;
	printf("%d\n",p);
	p=x>y;
	
	printf("%d\n",p);
	p=x<=y;
	printf("%d\n",p);
	p=x>=y;
	printf("%d\n",p);
	
	//logical operator
	p=x&&y;
	printf("%d\n",p);
	p=x||y;
	printf("%d\n",p);
	p=!x;
	printf("%d\n",p);
	
	//increment /decrement operator
	x++;
	printf("%d\n",x);
	++x;
	printf("%d\n",x);
	x--;
	printf("%d\n",x);
	--x;
	printf("%d\n",x);
	p=++x;
	printf("%d\n",p);
	p=x++;
	printf("%d\n",p);
	p=--x;
	printf("%d\n",p);
	p=x--;
	printf("%d\n",p);
	// assignment opertaor
	x+=10;
	printf("%d\n",x);
	x-=10;
	printf("%d\n",x);
	x*=10;
	printf("%d\n",x);
	x/=10;
	printf("%d\n",x);
	x%=10;
	printf("%d\n",x);
	
	//bitwise operator
	
	p=x<<2;
	printf("%d\n",p);
	p=x>>2;
	printf("%d\n",p);
	p=~x;
	printf("%d\n",p);
	p=x&2;
	printf("%d\n",p);
	p=x|2;
	printf("%d\n",p);
	p=x^2;
	printf("%d\n",p);
	//ternoary opertaor
	p=x>y?1:2;
	printf("%d\n",p);
	
	//size of operator
	p=sizeof(x);
	printf("%d\n",p);
	p=sizeof(int);
	printf("%d\n",p);
	
	return 0;
}
