#include <stdio.h>
#include <stdlib.h>

int main()
{int i,n,j,k,nsp,l,a;
    printf("\n enter a value ");
    scanf("%d",&n);
    nsp=n-1;
    for(i=1;i<=n;i++)
    {   a=i-1;
        for(j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
            printf("%d",k);
            for(l=1;l<=i-1;l++)
       // for(l=i-1;l>=1;l--)
        {


                printf("%d",a);
                a--;
        }
            printf("\n");
            nsp--;

    }

    return 0;
}
