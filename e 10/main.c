#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
    printf("\n enter the value ");
    scanf("%d",&n);
    int k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("%d",k);
        }
        printf("\n");
        k++;
    }
    return 0;
}
