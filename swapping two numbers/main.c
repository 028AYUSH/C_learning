#include <stdio.h>
#include <stdlib.h>
swap(int* x,int* y)
{
    int temp;
    temp= *x;
    *x= *y;
    *y=temp;
    return;
}

int main()
{   int a,b;
    printf("\n enter value of a ");
    scanf("%d",&a);
    printf("\n enter value of b ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("value of a = %d",a);
    printf("value of b = %d",b);
    return 0;
}
