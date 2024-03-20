#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,j,k,n,nsp;
    printf("\n enter a number ");
    scanf("%d",&n);
       nsp=n-1;
    for(i=1;i<=2*n;i=i+2)
    {

        char c;
        c='A';
        for(j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%c",c);
            c=c+1;
        }
        printf("\n");
        nsp--;
    }
    return 0;
}
