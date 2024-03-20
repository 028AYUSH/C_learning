#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
    printf("\n enter a number ");
    scanf("%d",&n);
    printf("factors of %d are ",n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("[%d] ",i);
        }
    }
    printf("\n prime factors of %d are ",n);
    for(int i=1;i<=n;i++)
    { int c=0;
        if(n%i==0)
        {
            for(int j=2;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }

            }
                if(c==1)
                    printf("%d ",i);
        }
    }
    return 0;
}
