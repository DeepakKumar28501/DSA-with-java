#include<stdio.h>
#include<stdlib.h>

int main(){
	char name[30],gend;
	int married;
	
	printf("Enter Name\n");
	
	gets(name);
	printf("\nChoose gender if male then choose input m otherwise f ");
	scanf("%c",&gend);
	printf("\nChoose maritial status if married then choose input **** 1 *** otherwise **** 2 *** ");
	scanf("%d",&married);

	
	if(gend=='m'||gend=='M'){
		if(married=='a'||married=='A'){
			printf("\nName= Mr.%s\nGENDER=MALE\nMaritial Status=Married",name);
		}else{
			printf("\nName= Mr.%s\nGENDER=MALE\nMaritial Status=Unmarried",name);
		}
	}
	else{
		if(married==1){
			printf("\nName= Mrss.%s\nGENDER=FEMALE\nMaritial Status=Married",name);
		}else{
			printf("\nName= Mrs.%s\nGENDER=FEMALE\nMaritial Status=Unmarried",name);
		}
	}
	
	
	
	
}
