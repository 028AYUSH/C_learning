#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,i,j;
    printf("\n enter a value ");
    scanf("%d",&n);
    int min=0;
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            int a=i;
            if(a>n) a=2*n-i;
            int b=j;
            if(b>n)b=2*n-j;
            if(a<b) min =a;
            else min=b;
            printf("%d",n+1-min);
        }
        printf("\n");
    }
    return 0;
}
