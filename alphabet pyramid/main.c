#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,i,j,k,nsq;
    printf(" \n enter value ");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {    char ch='A';
        nsq=1;


        for(k=1;k<=n-i;k++)
        {
            printf(" ");

        }
        for(j=1;j<=i;j++);
        {  int d=nsq+64;
        char ch=(char)d;
            printf("%c",ch);
            nsq++;


        }
        printf("\n");


    }
    return 0;
}
