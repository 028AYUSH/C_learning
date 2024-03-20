#include <stdio.h>
#include <stdlib.h>
 int factorial(int n)
{
    int i;
    int a=1;
    for(i=1;i<=n;i++)
    {
        a=i*a;
    }
    return a;
}
int main()
{  int n;
    printf("\n enter a number ");
    scanf("%d",&n);
    int factorial(n);
    int d=  factorial(n);
    printf("factorial = %d",d);
    return 0;
}
