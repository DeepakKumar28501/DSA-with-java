#include<stdio.h>
void tower(int,char,char,char);
int main(){
    tower(6,'A','B','C');
}

void tower(int n,char beg,char aux,char end){
    static int i=0;
     i++;
    if(n==0){
        printf(" %d Movement cannot be perform because there have no Disk\n",i);
    }
    else if(n==1)
       
        printf("%d Move a disk from %c to %c\n",i,beg,end);
    else{
       
        tower(n-1,beg,end,aux);
        printf("%d Move a disk from %c to %c\n",i,beg,end);
        tower(n-1,aux,beg,end);
    }
}