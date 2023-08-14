#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
 void create();
 void display();
 void insert_begin();
 void insert_end();
 void del_begin();
 void del_end();

 struct node
 {
  int info;
  struct node *next;
 
 };
 
 node*start=null;

 int main()
 {
  int choice;
  char ch;
  
  do
   {
    printf("\npress 1 for create");
   
    printf("\npress 3 for Insertion at begining");
    printf("\npress 4 for Insertion at ending");
    printf("\npress 5 for Deletion at begining");
    printf("\npress 6 for Deletion at ending");
    printf("\npress 7 for Exit");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:
     create();
     break;
     
     case 3:
     insert_begin();
     break;
     case 4:
     insert_end();
     break;
     case 5:
     del_begin();
     break;
     case 6:
     del_end();
     break;
     case 7:
     exit(0);
     default:
     printf("Invalid Choice");
    }
     printf("want to repeat press y or n");
     ch=getche();
   }while(ch=='y'||'Y');
   }

  
   void create()
    {
     struct node *temp,*ptr;
     temp=(struct node*)malloc(sizeof(struct node));
    }
    
    
    
    void insert_begin()
     {
      struct node *temp;
      temp=(struct node*)malloc(sizeof(node));
      if(start==null)
      {
       printf("\n out of memory space");
       getch();
       exit(0);
      }
      printf("Enter the data value for the node");
      scanf("%d",&temp->info);
      
      if(start==null)
      {
       start=temp;
      }
      temp->next=null;
      else
      {
       temp->next=start;
       start=temp;
      }
      }
    
	
	
	  void insert_end()
      {
       struct node *temp,*ptr;
       temp=(struct node*)malloc(sizeof(struct node));
       if(temp==null)
       {
	printf("\n out of memory of space");
	getch();
	eixt(0);
       }
	printf("Enter the data value fore the node");
	scanf("%d",&temp->info);
	temp->next=null;
	if(start==null)
	{
	 start=temp;
	}
	else
	{
	 ptr=start;
	 while(ptr->next!=null)
	 {
	  ptr=ptr->next;
	 }
	 ptr->next=temp;
	}
	
	
	
	
	void del_begin()
	{
	 struct node *ptr;
	 if(ptr==null)
	 {
	  printf("list is empty");
	  getch();
	  exit(0);
	 }
	 else
	 {
	  ptr=start;
	  start=start->next;
	  printf("The Delete item is %d" ptr->info);
	  free(ptr);
	 }
	}




	void del_end()
	{
	 struct node *temp,*ptr;
	 if sturct==null)
	 {
	  printf("list is empty");
	  getch();
	  exit(0);
	 }
	 else if(start->next==null)
	 {
	  ptr=start;
	  start=null;
	  printf("\nprintf Element %d",ptr->info);
	  free(ptr);
	 }
	 else
	 {
	  ptr=start
	  while(ptr->next!=null)
	  {
	   temp=ptr;
	   ptr=ptr->next;
	  }
	   temp->next=null;
	   printf("\Delete Element is %d" ptr->info);
	   free(ptr);
	 }
}



















