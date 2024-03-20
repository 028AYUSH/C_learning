#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
    printf("\n enter value of ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
