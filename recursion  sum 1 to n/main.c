#include <stdio.h>
#include <stdlib.h>
sum(int n)
{
    if(n==0) return;


    return n+sum(n-1); ;
}
int main()
{ int n;
    printf("\n enter a number ");
    scanf("%d",&n);
    int d =sum(n);
    printf("%d",d);
    return 0;
}
