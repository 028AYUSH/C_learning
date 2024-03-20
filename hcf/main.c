#include <stdio.h>
#include <stdlib.h>

int min(int a,int b)
{


if(a<b)
    return a;
else
    return b;
}
gcd(int a,int b)
{ int i;
int hcf;
    for(i=1;i<=min(a,b);i++)
    {
        if(a%i==0&&b%i==0)
            hcf=i;

    }
    return hcf;
}
int main()
{ int a,b;
    printf(" enter 1st number \n");
    scanf("%d",&a);
    printf(" enter 2nd number \n");
    scanf("%d",&b);
    int hcf=gcd(a,b);
    printf("the hcf of %d and %d is %d",a,b,hcf);

    return 0;
}
