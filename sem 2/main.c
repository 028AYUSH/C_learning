#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,n,d,r=0;
    printf("\n enter a number ");
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10)
    {
        d=i%10;
        r=r*10+d;
    }
    printf("reverse of %d is %d ",n,r);
    return 0;
}
