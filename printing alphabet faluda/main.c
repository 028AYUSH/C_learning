#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,j,k,l,i,nsp,nst,nsq,a;
    printf("\n enter a value ");
    scanf("%d",&n);
    nst=n;
        nsp=1;
        nsq=n+2;
        char ch='A';
        for(a=1;a<=2*n+1;a++){

            printf("%c",ch);
             ch++;
        }
            printf("\n");


    for(i=1;i<=n;i++)
    { ch='A';
        for(j=1;j<=i;j++)
        {
            printf("%c",ch++);
        }
       // for(k=1;k<=nsp;k++)
       // {
          //  printf(" ");
           // ch++;
       // }
        for(l=nsq;l<=2*n+1;l++)
            printf("%c",ch++);
            printf("\n");
    nsp+=2;
    nst--;
    nsq++;
    }

    return 0;
}
