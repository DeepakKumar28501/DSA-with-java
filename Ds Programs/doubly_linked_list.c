#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
	struct node *pre;
	
};
typedef struct node NODE;
void insert_new_element_at_begin_DLL(NODE **,NODE**,int);
void insert_at_after_loc_DDL(NODE *,NODE **,NODE *,int);
void traverse_begin(NODE *);
void traverse_end(NODE *);
int input(int);

int main(){
	NODE *head=NULL;
	NODE *tail=NULL;
	NODE *loc;
	int temp,choice;
	
	
	do{
		printf("\n***Choose One Option *****");
		printf("\nPress 1 for Insert New Element at the beginig :");
		printf("\nPress 2 for Insert new node after the loc position:");
		printf("\nPress 3 For Traverse Begining");
		printf("\nPress 4 for traverse End");
		printf("\nPress 15 for Exit");
		printf("\nPress one option: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				temp=input(0);
				insert_new_element_at_begin_DLL(&head,&tail,temp);
				break;
			case 2:
				
				break;
			case 3:
				traverse_begin(head);
				break;
			case 4:
				traverse_end(tail);
				break;
			case 15:
				exit(0);

			default:
				printf("\nYou Input invalid option Please try again");
		}
			
	}while(1);
}

int input(int n){// if we pass 1 in argument than it 
	if(n)
		printf("Enter Position Where insert  or delete element: ");
	else
		printf("Enter a number Insert begining of list: ");
	scanf("%d",&n);
	return n;
}


void insert_new_element_at_begin_DLL(NODE **first,NODE **last,int element){
	NODE *newnode;
	newnode=(NODE *)malloc(sizeof(NODE));
	newnode->next=NULL;
	newnode->data=element;
	newnode->pre=NULL;
	
	if(first==NULL){
		*first=newnode;
		*last=newnode;
	}else{
		newnode->next=*first;
		*first->pre=newnode;
		*first=newnode;
	}
	printf("\n%d inserted",newnode->data);
}




void traverse_begin(NODE *first){
	if(first==NULL)
		printf("\nThere have no element in the linked list");
	else{
		while(first->next!=NULL){
			printf("\n>> %d",first->data);
			first=first->next;
		}
	}
}


void traverse_end(NODE *last){
	if(last==NULL)
		printf("\nThere have no element in the linked list");
	else{
		while(last->pre!=NULL){
			printf("\n>> %d",last->data);
			last=last->pre;
		}
	}
}

void insert_at_after_loc_DDL(NODE *first,NODE **last,NODE *loc,int element){
	
}


