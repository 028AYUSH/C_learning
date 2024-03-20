#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,j,k,l,i,nsp,nst,nsq,a;
    printf("\n enter a value ");
    scanf("%d",&n);
    nst=n;
        nsp=1;
        nsq=n+2;

        for(a=1;a<=2*n+1;a++)
            printf("%d",a);
            printf("\n");


    for(i=1;i<=n;i++)
    {
        for(j=1;j<=nst;j++)
        {
            printf("%d",j);
        }
        for(k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        for(l=nsq;l<=2*n+1;l++)
            printf("%d",l);
            printf("\n");
    nsp+=2;
    nst--;
    nsq++;
    }

    return 0;
}
