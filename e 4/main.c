#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,k,j,sum;
    printf("\n enter the value ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        int sum=1;
        for(k=1;k<=2*i-1;k++)
        {
            printf("%d ",sum);
            sum++;
        }
         printf("\n");
    }

    return 0;
}
