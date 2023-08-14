#include<stdio.h>


//struct student{
//	int rollno,mark[4];
//	char sname[100];
//	float avg;
//};
//
//int main(){
//	struct student st[100],t;
//	int n,i,j,sum=0;
//
//	printf("\n Enter No of Student That data to be insert:");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		sum=0;
//	
//		printf("\nEnetr roll and name number:");
//		scanf("%d,%s",&st[i].rollno,st[i].sname);
//		printf("\nEnter 4 Subject marks:");
//		
//		for(j=0;j<4;j++){
//			scanf("%d",&st[i].mark[i]);
//			sum=st[i].mark[i];
//		}
//		st[i].avg=(float)sum/4;
//	}
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n-i-1;j++){
//			if(st[i].avg>st[j+1].avg){
//				t=st[j+1];
//				st[j+1]=st[i];
//				st[j+1]=t;
//			}
//		}
//	}
//	
//	for(i=0;i<n;i++){
//		printf("\nStudent Rollno=%d\tname=%s\tavg=%5.2f",st[i].rollno,st[i].sname,st[i].avg);
//	}
//}

#include<stdio.h>
struct student{
	int rollno,mark[4];
	char sname[100];
	float avg;
};

int main(){
	struct student st[100],t;
	int n,i,j,sum=0;

	printf("\n Enter No of Student That data to be insert:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		sum=0;
	
		printf("\nEnetr roll and name number:");
		scanf("%d,%s",&st[i].rollno,st[i].sname);
		printf("\nEnter 4 Subject marks:");
		
		for(j=0;j<4;j++){
			scanf("%d",&st[i].mark[i]);
			sum=st[i].mark[i];
		}
		st[i].avg=(float)sum/4;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++){
			if(st[j].avg>st[j+1].avg){
				t=st[j+1];
				st[j+1]=st[j];
				st[j]=t;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("\nStudent Rollno=%d\tname=%s\tavg=%5.2f",st[i].rollno,st[i].sname,st[i].avg);
	}
}
