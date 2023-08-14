#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include <math.h>
struct node{
	int data;//data field that store node data
	struct node *next;//pointer field that store next pointer address
}; 

typedef struct node NODE;

int input(int);
NODE *head=NULL;
void insert_begining_ssl(int);//insert begining prototyping
void insert_at_end_ssl(int);//insert at the end of the linked list
void traverse();//print all element
int count(); // count node in list
void max_node_data();//find max value of node
void delete_begining_node();// Delete first node
void delete_end_node();
void insert_k_position();//insert node on kth position 
void delete_k_position();//delete kth position node
float mean();// return mean of element
void standard_dev();

void insert_before_value();
void insert_after_value();
void delete_before_value();
void delete_after_value();
int desire_insert();
void reverse_ssl();
int main(){
	
	int choice,temp;
	do{
		printf("\n***Choose One Option To Perform operation In Singly Linked List******");
		printf("\nPress 1 for Insert Begining");
		printf("\nPress 2 for Insert at the END");
		printf("\nPress 3 for Travese All Element");
		printf("\nPress 4 for Count nodes");
		printf("\nPress 5 for Max node value");
		printf("\nPress 6 for Delete Begining Node");
		printf("\nPress 7 for Delete End node");
		printf("\nPress 8 Insert Kth Position");
		printf("\nPress 9 Delete Kth Position Node");
		printf("\nPress 10 Mean All Element");
		printf("\nPress 11 Standard deviation of all element");
		printf("\nPress 12 for Insert before Specific value");
		printf("\nPress 13 for Insert after Specific value");
		printf("\nPress 14 for Delete before Specific value");
		printf("\nPress 15 for Delete After Specific value");
		printf("\nPress 16 for Reverse Node of List");
		printf("\nPress 17 for Exit");
		printf("\nPress one option: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				temp=input(0);
				insert_begining_ssl(temp);
				break;
			case 2:
				temp=input(0);
				insert_at_end_ssl(temp);
				break;
			case 3:
				traverse();
				break;
			case 4:
				printf("Total NODE In LIST=%d",count());
				break;		
			case 5:
				max_node_data();
				break;
			case 6:
				delete_begining_node();
				break;
			case 7:
				delete_end_node();
				break;
			case 8:
				insert_k_position();
				break;
			case 9:
				delete_k_position();
				break;
			case 10:
				printf("Mean of all node=%f",mean());
//				mean();
				break;
			case 11:
				standard_dev();
				break;
			case 12:
				insert_before_value();
				break;
			case 13:
				insert_after_value();
				break;
			case 14:
				delete_before_value();
				break;
			case 15:
				delete_after_value();
				break;
			case 16:
				reverse_ssl();
				break;
			case 17:
				exit(0);

			default:
				printf("\nYou Input invalid option Please try again");
		}
		
		
		
	}while(1);
}



void insert_before_value(){
	NODE *newnode,*loc=head,*preptr;
	int val_desire=desire_insert(),flag=0;
	
	if(head==NULL){
		printf("There is no node in linked list\n");
	}else{
		
		while(loc!=NULL){
			preptr=loc;
			loc=loc->next;
			if(loc->data==val_desire){
				flag=1;
				break;
			}
			
		}
		
		if(flag){
			newnode=(NODE *)malloc(sizeof(NODE));
			newnode->data=input(0);
			newnode->next=loc;
			preptr->next=newnode;
//			printf("\n----flag---\n");
			
		}else{
			printf("Your input value is not Found!");
		}
	}	
}



void insert_after_value(){
	NODE *newnode,*loc=head;
	int val_desire=desire_insert(),flag=0;
	
	if(head==NULL){
		printf("there is no node in linked list\n");
	}
	else{
		
		while(loc!=NULL){
			
			
			if(loc->data==val_desire){
				flag=1;
				break;
			}
			loc=loc->next;
			
		}
		
		if(flag){
			newnode=(NODE *)malloc(sizeof(NODE));
			newnode->data=input(0);
			if(loc->next==NULL)
				newnode->next=NULL;
			else
				newnode->next=loc->next;
			
			loc->next=newnode;
			printf("\n>>>>>>>NODE inserted\n");
			
		}else{
			printf("Your input value is not Found!");
		}
	}	
}

//delete before desire value
void delete_before_value(){
	NODE *loc=head,*preptr;
	int val_desire=desire_insert(),flag=0;
	
	if(head==NULL){
		printf("there is no node in linked list\n");
	}
	if(loc->data==val_desire){
		delete_begining_node();
		return; 
	}
	else
	{
		while(loc!=NULL){
			preptr=loc;
			loc=loc->next;
			if(loc->data==val_desire){
				flag=1;
				break;
			}
			
		}
		
		if(flag){
			preptr->next=loc->next;
			printf("\n>>>%d node deleted\n",loc->data);
			free(loc);
			
		}else{
			printf("Your input value is not Found!");
		}
		

		
	
	}
}


//delete after desire value node
void delete_after_value(){
	
	NODE *loc=head,*preptr;
	int val_desire=desire_insert(),flag=0;
	
	if(head==NULL){
		printf("there is no node in linked list\n");
	}
	else{
		
		while(loc!=NULL){
			preptr=loc;
			loc=loc->next;
			if(loc->data==val_desire){
				flag=1;
				break;
			}
			
			
		}
		
		if(flag){
			if(loc->next==NULL)
			preptr->next=NULL;
			else
				preptr->next=loc->next;
			printf("\n>>>>>%d Node is deleted\n",loc->data);
			free(loc);
			
		}else{
			printf("Your input value is not Found!");
		}
	}	
	
}





int desire_insert(){
	int n;
	printf("\nEnter a desire Value");
	scanf("%d",&n);
	return n;
}






//input position or number function
int input(int n){// if we pass 1 in argument than it 
	
	
	if(n)
		printf("Enter Position Where insert  or delete element: ");
	else
		printf("Enter a number Insert Linked list: ");
	scanf("%d",&n);
	
	
	return n;
}


//print all node of list
void traverse(){
	NODE *loc=head;
	if(head==NULL){
		printf("there is no node in linked list\n");
	}else{
		while(loc!=NULL)
		{
			printf("%d\n",loc->data);
			loc=loc->next;
		}
	}
}


int count(){
	NODE *loc=head;
	int c=0;
	if(head==NULL){
		printf("there is no node in linked list\n");
	}else{
		while(loc!=NULL)
		{
			c++;
			loc=loc->next;
		}
		return c;
	}
}


void max_node_data(){
	int max;
	NODE *loc=head;
	if(head==NULL)
		printf("there is no node in linked list\n");
	else{
		max=loc->data;
		loc=loc->next;
		while(loc!=NULL)
		{
			if(max<loc->data)
				max=loc->data;
			
			loc=loc->next;
		}
		printf("Max data is=%d",max);
	}
}

//insert begining of the linked list function defination
void insert_begining_ssl(int element)
{
	NODE * newnode;//struct node *newnode
	newnode=(NODE *)malloc(sizeof(NODE));
	newnode->data=element;
	newnode->next=NULL;
	if(head==NULL)
		head=newnode;
	else
	{
		newnode->next=head;
		head=newnode;
	}
	printf("\n>>>>>Data inserted %d\n",newnode->data);
	
}



//insert At the end of the linked list function defination
void insert_at_end_ssl(int element)
{
	NODE *newnode,*loc;
	newnode=(NODE *)malloc(sizeof(NODE));
	newnode->data=element;
	newnode->next=NULL;
	if(head==NULL)
		head=newnode;
	else
	{
		loc=head;
		while(loc->next!=NULL)
		{
			loc=loc->next;
		}
		loc->next=newnode;
	}	
	printf("\n>>>>>Data inserted\n");
}
//delete First node
void delete_begining_node(){
	NODE *temp;
		if(head==NULL)
			printf("there is no node in linked list\n");
		
		else{
			
			temp=head;
			if(temp->next==NULL)
				head=NULL;
			else
			head=temp->next;
			
			printf("Item deleted=%d\n",temp->data);
			free(temp);
		}
}
//delete End node

void delete_end_node(){
	NODE *loc,*temp;
	if(head==NULL)
			printf("there is no node in linked list\n");
	
	if(head->next==NULL){
		loc=head;
		printf("Item deleted=%d\n",loc->data);
		head=NULL;
		free(loc->next);
		}
	else{
		loc=head;
		while(loc->next!=NULL){
			temp=loc;
			loc=loc->next;
		}
		temp->next=NULL;
		printf("item deleted %d",loc->data);
		free(loc);
		
	}
}

// insert node on kth position 
void insert_k_position(){
	int l=0,i;
	NODE *newnode,*loc=head;
	int element=input(0);
	int position=input(1);
	if(position==1)
		insert_begining_ssl(element);
	else{
		
		newnode=(NODE *)malloc(sizeof(NODE));
		newnode->data=element;
		newnode->next=NULL;
		l=count();
		if(position>l+1)
			printf("Currently there are %d  number of nodes inserted at %d postion is not allowed",l,position);
		else{
			
			for(i=1;i<position-1;i++)
				loc=loc->next;
			newnode->next=loc->next;
			loc->next=newnode;	
			printf("\n>>>>>Data inserted %d\n",newnode->data);
		}
	}
	
}


//delete specific position element
void delete_k_position(){
	int position,i;
	NODE *loc=head,*temp;
	printf("\n Enter the postion to delete element:");
	scanf("%d",&position);
	if(position==0){
		printf("\nNot accept 0 position greater than 0");
		return ;
	}
	if(position==1){
		delete_begining_node();
	}
	else{
		for(i=1;i<position-1;i++){
			loc=loc->next;
//			printf("\n>>>>>  %d Deleted\n",loc->data);
		}
		
		temp=loc->next;
		if(temp->next==NULL)
			loc->next=NULL;
		else
			loc->next=temp->next;
		

		printf("\n>>>>>  %d Deleted\n",temp->data);
		free(temp);
		
	}
}

float mean(){
	NODE *loc=head;
	int c=0;
	float mean_a=0.0,sum=0;
	if(head==NULL){
		printf("there is no node in linked list\n");
	}else{
		while(loc!=NULL)
		{
			c++;
			sum+=loc->data;
			loc=loc->next;
		}
		
		mean_a=sum/c;
		return mean_a;
	}
}

void standard_dev()
{
	NODE *loc=head;
	int c=0,n;
	double mean_temp=0.0,variance,stddev=0;
	n=count();
	mean_temp=mean();
	if(head==NULL)
		printf("there is no node in linked list\n");
	else{
		while(loc!=NULL)
		{
			stddev += pow(loc->data -mean_temp, 2);
			loc=loc->next;
		}
		
		 variance = stddev/n;	
		 stddev = sqrt(variance);
		 printf("Standard deviation=%lf",stddev);
		
	}
}

void reverse_ssl(){
	NODE *previous,*current,*successor,*loc=head;
	if(loc==NULL)
		printf("\n No Node Present , Reverse Not possible\n");
	else if(loc->next==NULL)
		printf("\n list has only One one therefore reverse is not possible");
	else if(loc->next->next==NULL){
		loc->next->next=loc;
		loc=loc->next;
		loc->next=NULL;
	}
	else{
		//  3 or more node present in the linked list then reverse list code
		previous=loc;
		current=previous->next;
		successor=current->next;
		while(successor!=NULL){
			current->next=previous;
			previous=successor;
			successor=successor->next;
		}
		current->next=previous;
		loc->next=NULL;
		loc=current;
		
	}
}
