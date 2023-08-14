#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

void insert_big();
void insert_end();
void del_beg();
void del_end();
void traverse();
void count();




int main()
{
	int choice;
	char ch;
	clrscr();
	do
	{
		printf("\n\t* * * * Enter Your choice By the manu");
		printf("\n\tPress 1 For Insert Begining");
		printf("\n\tPress 2 For Insert End");
		printf("\n\tPress 3 for Delete Begining");
		printf("\n\tPress 4 For Delete end ");
		printf("\n\tPress 5 For traversing");
		printf("\n\tPress 6 For counting all node");
		printf("\n\tPress 7 For exit");
		sacnf("%d",&choice);
		switch(choice)
		{
			
		case 1:
		insert_begin();
		break;
		case 2:
		insert_end();
		break;
		case 3:
		del_beg();
		break;
		case 4:
		del_end();
		break;
		case 5:
		traverse();
		break;
		case 6:
		count();
		break;
		case 7:
			exit(0);
		break;
		default:
		printf("\n your choice is invalid please try again\n");
		break;
				
		}
		printf("do you want to continue press y or n\n");
		ch=getch();
	}while(ch=='y'||'Y');
			return 0;
}




