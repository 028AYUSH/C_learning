#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a,b=0;
    printf("\enter a number=");
    scanf("%d",&n);
    printf("the factors of %d are = ",n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
    {
      printf("%d ",i);
    }
    }
    printf(" \n prime factors of %d are = ",n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
    {
        for(a=2;a<i;a++)
        {


        if(i%a==0)
            {
                b++;
            }
        if(b==1)
            printf(" %d ",a);
        }
        }
        }

    return 0;
}
