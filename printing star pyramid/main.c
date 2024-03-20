#include <stdio.h>
#include <stdlib.h>

int main()
{int n,i,j,k;
    printf("\n enter a number ");
    scanf("%d",&n);
    int nsp=n-1;
     int ns=1;
    for(i=1;i<=2*n;i=i+2)
    {
       for(j=1;j<=nsp;j++)
       {

            printf(" ");
        }
        for(k=1;k<=ns;k=k+1)
        {
           // if(k%2!=0)
                printf("*");
        }
         ns=ns+2;
        --nsp;
        printf("\n");
    }
    return 0;
}
