#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,j,n;
    printf("\n enter a value ");
    scanf("%d",&n);
        int ayush=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
printf("  ");
}

for(j=1;j<=2*i-1;j++)
{
printf("%d|",ayush);
            ayush++;
        }
        printf("\n");
    }
    return 0;
}
