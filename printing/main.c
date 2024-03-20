#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
    printf("\n enter the square value ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<=n;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
