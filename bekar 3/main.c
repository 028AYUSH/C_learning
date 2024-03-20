#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=-1,b=1,i,c;
    for(i=1;i<=10;i++)
        {
         c=a+b;
        printf("%d ",c);
        a=b;b=c;

        }

    return 0;
}
