#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int f=-1;
int r=-1;
int q[MAX];

enqueue(int value)
{
    if(((r+1)%MAX)==f)
    {
        printf("queue is full");
    }
    else if(f==-1&&r==-1)
    {
        f=r=0;
        q[r]=value;
    }
    else
    {
        r=(r+1)%MAX;
        q[r]=value;
    }
}

dequeue()
{
    int value;
    if(f==-1)
    {
        printf("queue is empty");
    }
    else
    {
        value=q[f];
        if(f==r)
        {
            f=-1;
            r=-1;
        }
        else
        {
            f=(f+1)%MAX;
        }
        printf("%d is eliminated",value);
    }
}

display()
{
    if(r==-1&&f==r)
    {
        printf("queue is empty");
    }

    else{
        for(int i=f;i!=r;i=(i+1)%MAX)
    {
        printf("[%d]\n",q[i]);
    }
        printf("%d",q[r]);
    }
}



int main()
{

    while (1)
    {
        int choice,value;
        printf("\n1. ENQUEUE \n2. DEQUEUE \n3. DISPLAY \n4. EXIT");
        printf("\nEnter choice ");
        scanf("%d",&choice);

        switch(choice)
        {
        case(1):
            printf("\n enter value to be inserted ");
            scanf("%d",&value);
            enqueue(value);
            break;

        case(2):
            dequeue();
            break;

        case(3):
            display();
            break;

        case(4):
            return 0;
            break;

        default:
            printf("\n invalid input");

        }

    }

    return 0;
}
