#include<stdio.h>
int main(){
	float sell_x,sell_y,sell_z,tcom_x=0,tcom_y=0,tcom_z=0;
	printf("Enter the Sell Of Region X,Y,Z....:");
	scanf("%f%f%f",&sell_x,&sell_y,&sell_z);
	//*************** SELL X **********************
	if(sell_x<=5000){
		tcom_x+=sell_x*0.1;
	}
	elseif(sell_x<=10000){
		tcom_x+=sell_x*0.12;
	}
	else{
		tcom_x+=sell_x*0.15;
	}
		//*************** SELL Y **********************
	if(sell_y<=5000){
		tcom_y+=sell_y*0.8;
	}
	elseif(sell_y<=10000){
		tcom_y+=sell_y*0.1;
	}
	else{
		tcom_y+=sell_y*0.12;
	}
		//*************** SELL X **********************
	if(sell_y<=5000){
		tcom_z+=sell_z*0.8;
	}
	elseif(sell_y<=10000){
		tcom_z+=sell_z*0.1;
	}
	else{
		tcom_z+=sell_z*0.12;
	}	
	printf("\nShell Commision is:.........");
	printf("Region X=%f",tcom_x);
	printf("Region Y=%f",tcom_y);
	printf("Region Z=%f",tcom_z);
	printf("Region X=%f",tcom_x+tcom_y+tcom_z);
	return 0;
}
