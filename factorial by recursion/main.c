#include <stdio.h>
#include <stdlib.h>
int factorial(int n)
{
    if(n==1 || n==0) return 1;

    return n*factorial(n-1);
}
int main()
{ int n;
    printf("\n enter value ");
    scanf("%d",&n);
    int fact= factorial(n);
    printf("%d",fact);
    return 0;
}
