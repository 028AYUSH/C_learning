#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
    printf("\n enter value ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     for(int j=1;j<=n-i;j++)
     {
         printf(" ");
     }
     for(int k=1;k<=2*i-1;k=k+1)
     {
         printf("*");
     }
     printf("\n");
    }

    return 0;
}
