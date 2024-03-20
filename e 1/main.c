#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,sum,i,j;
    printf("\n enter a value ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    { sum=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",sum);
            sum++;
        }
        printf("\n");
    }
    return 0;
}
