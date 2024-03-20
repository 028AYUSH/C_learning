#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,i,j,k,nsp,nst,ml;
    printf("\n enter a value ");
    scanf("%d",&n);
    nsp=n/2;
    nst=1;
    ml=n/2+1;
    for(i=1;i<=n;i++)

    {

        for(j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(k=1;k<=nst;k++)
        {
            printf("*");
        }
        if(i<ml)
        {
            nsp--;
            nst+=2;
        }
        else
            {
                nst-=2;
                nsp++;
            }
            printf("\n");
    }
    return 0;
}
