#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int num1,num2,result;

    printf("\n WELCOME TO THE WORLD OF PROGRAMMING..\n");

    printf("please enter the first number: ");
    scanf("%d",&num1);

    printf("enter the second number: ");
    scanf("%d",&num2);

    printf("\n performing the addition operation ");
    result=num1+num2;

    printf("\n %d + %d =%d",num1,num2,result);
    return 0;
}
