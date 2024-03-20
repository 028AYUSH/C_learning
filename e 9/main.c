#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
    printf("\n enter the value ");
    scanf("%d",&n);
    int k=n;
    for(int i =1; i<=k; i++ )
    {
        for(int j=n;j>0;j--)
        {
            printf("%d",n);
        }
        printf("\n");
        n--;
    }
    return 0;
}
