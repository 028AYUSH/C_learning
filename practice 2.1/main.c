#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX];
int top = -1;
ifEMPTY(){
    if(top==-1){
        return 1;
    }
    else
        return 0;
}
ifFULL(){
    if(top==MAX-1)
        return 1;
    else
        return 0;

}

push(int data){
    if(ifFULL()){
        printf("STACK IS OVERFLOW");
    }
    else{
        top++;
        stack[top]=data;
    }
}

pop(){
    if(ifEMPTY()){
        printf("STACK IS UNDERFLOW");
    }
    else{
        top--;
    }

}

display(){
    int i;
    for(i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
}


int main()
{
    int a,b,c;
    while(1){

        printf("\n1. FOR PUSH \n2. FOR POP\n3. FOR DISPLAY");
        printf("\nchoose a number");
        scanf("%d",&c);

        switch(c)
        {
          case 1:
              printf("\nenter the number you want to push");
              scanf("%d",&a);
              push(a);
              break;
          case 2:
                pop();
                break;
          case 3:
                display();
                break;
          case 4:
                exit(1);
                break;
          default:
               break;

        }




    }

    return 0;
}
