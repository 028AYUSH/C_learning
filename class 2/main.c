#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1,num2,result;
    void my_welcome(void);
    void my_display(int,int,int);
    void my_goodbye(void);

    my_welcome();


    printf("please enter the first number: ");
    scanf("%d",&num1);

    printf("enter the second number: ");
    scanf("%d",&num2);

    printf("\n performing the addition operation ");
    result=num1+num2;

    my_display(num1,num2,result);

    my_goodbye();
}
void my_goodbye(void){
    printf("\n end of program");
    printf("\n good bye");
}

void my_display(int n1,int n2,int re){
    printf("\n %d + %d = %d",n1,n2,re);
}
void my_welcome(void){
    printf("\n welcome to the world of programming\n");
}
