#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,i,j,sum;
    printf("\n enter a value ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {  if(j%2!=0)
            sum=1;
           else
                sum=0;
           printf("%d ",sum);
        }
        printf("\n");
    }
    return 0;
}
