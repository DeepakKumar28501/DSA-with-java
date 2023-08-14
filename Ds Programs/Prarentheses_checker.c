#include<stdio.h>
#include<string.h>
#define max 10
int top=-1;
int stk[max];
void push(char);
char pop();
void main(){
    char exp[max],temp;
    int i,flag=1;
    printf("Enter the expresion : ");
    gets(exp);
    for(i=0;i<strlen(exp);i++){
        if(exp[i]=='(' || exp[i]=='{'||exp[i]=='[')
            push(exp[i]);
        if(exp[i]==')' || exp[i]=='}'||exp[i]==']')
            if(top==-1)
                flag=0;
            else{
                temp=pop();
                if(exp[i]==')' && (temp=='{'|| temp=='['))
                    flag=0;
                if(exp[i]=='}' && (temp=='('|| temp=='['))
                    flag=0;
                if(exp[i]==']' && (temp=='('|| temp=='{'))
                    flag=0;
            }
if(top>=0)
    flag=0;
if(flag==1)
    printf("\nValid Expression");
else
    printf("\ninvalid Expression");
        
    }

}
void push(char c){
    if(top==(max-1))
        printf("\n Stack Over flow");
    else{
        top=top+1;
        stk[top]=c;

    }
}
char pop(){
        if(top==-1){
            printf("\n Stack Is Overflow");
        }
        else{
            return(stk[top--]);
        }
    
}
    
