#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int queue[MAX];
int rear=-1;
int front=-1;
isEMPTY(){
    if(front==rear){
        return 1;
    }
    else{
        return 0;
    }
}
isFULL(){
    if(front==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

enqueue(int data){
    if(isFULL()){
        printf("queue is full");
    }
    else if(front==-1 && rear==-1){
        front++;
        rear++;
    }
    else{
        front++;

    }
     queue[front]=data;
}

dequeue(){
    if(isEMPTY()){
        printf("queue is empty");
    }
    else{
        rear++;
    }
}

display(){
    int i;
    for(i=rear;i<=front;i++){
        printf("%d",queue[i]);
    }

}

int main()
{
    int a,b,c;
    while(1){
        printf("\n1. ENQUEUE \n2. DEQUEUE \n3. DISPLAY");
        printf("enter your choice");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("enter the data");
            scanf("%d",&a);
            enqueue(a);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            break;

        }
    }


    return 0;
}
