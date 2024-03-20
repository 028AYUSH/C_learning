#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
    printf("\n enter a number ");
    scanf("%d",&n);
    float sum=0;
    for(float i=1;i<=n;i++)
    {
       float d=1/i;
       sum=sum+d;
    }
    printf("%f",sum);
    return 0;
}
