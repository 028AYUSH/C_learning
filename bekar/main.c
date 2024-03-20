#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,d,i,sum=0;
    printf("enter the number \n");
    scanf("%d",&n);
    printf(" the positve divisor=");
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            {
             sum=sum+i;
              printf(" %d ",i);
            }



    }
    printf("\n the sum is %d",sum);
    if(sum==n)
        printf("\n the number is perfect");
    else
         printf("\n the number is not perfect");


    return 0;
}
