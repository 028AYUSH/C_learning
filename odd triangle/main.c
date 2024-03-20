#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,j,n,c=0;
    printf("\n enter value ");
    scanf("%d",&n);
    for(i=1;i<=2*n;i=i+2)
    {
        for(j=1;j<=i;j++)
        {
            c=c+1;
            if(j%2!=0)
                printf("%d",c);
        }
        printf("\n");
        c=0;
    }
    return 0;
}
