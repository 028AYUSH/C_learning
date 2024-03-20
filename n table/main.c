#include <stdio.h>
#include <stdlib.h>

int main()
{int n,i,j;
    printf("enter a number= \n");
    scanf("%d",&n);
   // scanf("%d",&j)
   j=4;
    for(i=4;i<=n;i=i++)
    {
        printf("%d \n",j);
        j=j+3;
    }
    return 0;
}
