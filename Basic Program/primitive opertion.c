#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define maxsise[50]
void insert();
void del();
void travers();
void short();
void search();

int n,ind=0;
void main()
{
	int choice;
	char ch;
	
	do
	{
		printf("\n Select your choice");
		printf("\nPress 1 for Insertion ");
		printf("\n Press 2 for deletion");
		printf("\n Press 3 for travrsing");
		printf("\n Press 4 for shorting");
		printf("\n Press 5 for search ");
		printf("\n Press 6 for exit");
		scanf("%d",&choice);
		switch(choice)
		case 1:
			insert();
		case 2:
			del();
		case 3:
			travers();
		case 4:
			short();
		case 5:
			search();
		case 6:
			exit(0);
		default:
		printf("\n * * * * * * * * * *Your choice invalid Please select right choice* * * * * * * *\n")	;
		printf(" * * ** * **  ** * * *Want to  continue press Y or for Exit n* * * ** *");
		ch=getch();
	}while(ch=='Y'||'y');
	getch();
}
			
	}
}
