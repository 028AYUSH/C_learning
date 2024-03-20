#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,c,nsp;
    printf("\n enter value ");
    scanf("%d",&n);

    nsp=n-1;
    for(i=1;i<=2*n;i=i+2)
    {
        c=1;


        for(j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {

            printf("%d",c);
            c=c+1;
        }
         printf("\n");
        nsp--;


    }

    return 0;
}
