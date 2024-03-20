#include <stdio.h>
#include <stdlib.h>

int main()
{  int i,j,k,a,nsp,n;
    printf("\n  enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        nsp=n-i;
        a=1;
        for(j=1;j<=nsp;j++)
        {
            printf("   ");
        }
        for(k=1;k<=i;k++)
        {
            int d=a+64;
            char ch =(char)d;
            printf("%c ",ch);
            a++;
        }
        a=i-1;
         for(k=1;k<=i-1;k++)
        {
            int d=a+64;
            char ch =(char)d;
            printf("%c ",ch);
            a--;
        }

        printf("\n");
    }
    return 0;
}
