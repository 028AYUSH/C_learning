#include <stdio.h>
#include <stdlib.h>

int main()
{int i,n,sum=1,j;
    printf(" enter the no. \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {sum=sum*j;}

    }
    printf("%d \n",sum);



    return 0;
}
