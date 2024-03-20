#include <stdio.h>
#include <stdlib.h>

int main()
{int n,j,i,k;char ch;
    printf("\n enter a value ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ch='A';
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(k=1;k<=i;k++){
            printf("%c",ch);
            ch++;
        }
            printf("\n");
    }

    return 0;
}
