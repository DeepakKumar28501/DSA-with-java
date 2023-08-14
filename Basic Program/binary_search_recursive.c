#include<stdio.h>

int search(int a[],int first,int last,int element){
	int middle=(first+last)/2;
	if(last>=first){
		if(element==a[middle]){
			return middle+1;
		}
		if(a[middle]>element){
			return search(a,first,middle-1,element);
		}
		else{
			return search(a,middle+1,last,element);
		}
	}
	return -1;
}

int main(){
	int a[9]={1,3,5,7,8,9,11,22,45},element=9,n=9,rtn,i,j,temp;
	int search(int [],int,int,int);
	
	
//	binary search
 for(i=0;i<n-1;i++){
 	for(j=0;j<n-i-1){
 		if(a[j]>a[j+1])// if ascending
 		{
 			temp=a[j];
 			a[j]=a[j+1];
 			a[j+1]=temp;;
		 }
	 }
 }

	rtn=search(a,0,n-1,element);
	if(rtn==-1){
		printf("\nitem not found");
	}
	else{
		printf("item foound at position of=%d",rtn);
	}
	
	return 0;
}
