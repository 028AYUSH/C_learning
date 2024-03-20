#include <stdio.h>
#include <stdlib.h>
fibonacci(int n)
{
   int a=0;
    int b=1,c;

    for(int i=1;i<=n;i++){
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
}
}
int main()
{ int n;
    printf("\n enter the value ");
    scanf("%d",&n);
    printf("fibonacci series ");
    fibonacci(n);
    return 0;
}
