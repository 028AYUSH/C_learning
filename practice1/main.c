#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX];
int top=-1;

int ISFULL()
{
    if(top==MAX-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int ISEMPTY()
{
    if(top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push(int data){

 if(ISFULL()){

    printf("OVERFLOW");

 }
 top=top+1;
 stack[top]=data;
 printf("%d is successfully pushed",data);

}

void pop(){

int data;
if(ISEMPTY){
    return;
}
data=stack[top];
top=top-1;
printf("%d is pushed out",data);

}

void peek(){
    if(ISEMPTY())
    {
        printf("UNDERFLOW");
    }
    printf("%d is at the top",stack[top]);

}

void display(){

    for(int i=0;i<=top;i++)
    {
        printf("%d \n",stack[i]);
    }
    return;

}

int main()
{

    int choice,data;
    while(1)
    {
         printf("\n1. push\n2. pop\n3. peek\n4. display\n5. exit");
         printf("\nenter your choice ");
         scanf("%d",&choice);
         switch(choice)
         {
         case 1:
            printf("enter the number you want to add ");
            scanf("%d",&data);
            push(data);
            break;
         case 2:
            pop();
            break;
         case 3:
            peek();
            break;
         case 4:
            display();
            break;
         case 5:
            exit(1);
         default:
            printf("enter correct choice");
            break;
         }
    }
    return 0;
}
