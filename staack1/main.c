#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int stack[MAX];
int top=-1;
int isfull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
void push(int data)
{
    if(isfull())
    {
        printf("OVERFLOW");
        return;
    }
    top=top+1;
    stack[top]=data;
    printf("%d is successfully pushed",data);
}
int pop()
{int data;
    if(isempty())
    {
        printf("underflow");
        return;
    }
    data=stack[top];
    top=top-1;
    return data;
}
void peek()
{
    if(isempty())
    {
        printf("underflow");
        return;
    }
    printf("%d ",stack[top]);
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf(" [%d] ",stack[i]);
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
            data=pop();
            printf("%d is popped out",data);
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
