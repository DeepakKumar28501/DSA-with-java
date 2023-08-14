#include<stdio.h>
#include<stdlib.h>
struct student{
	int rollno;
	char sname[100];
	};

int main(){
	struct student st[100],t;
	int n,i,j;

	printf("\n Enter No of Student That data to be insert:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnetr roll and name number:");
		scanf("%d,%s",&st[i].rollno,st[i].sname);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(st[j].sname,st[j+1].sname)>0)
			{
				printf("true\n");
				t=st[j];
				st[j]=st[j+1];
				st[j+1]=t;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("\nStudent Rollno=%d\tname=%s",st[i].rollno,st[i].sname);
	}
}




