#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f;
    printf("\n enter value  of deposit = ");
    scanf("%d",&a);
    printf("\n no. of days =");
    scanf("%d",&b);
    if(b>=0 && b<=180)
     {
        c=(55*a)/100;
        printf("%d",c);
     }
    else if(b>=181 && b<=364)
     {
        d=(55*a)/100;
        printf("%d",d);
     }
    else if(b=365)
    {
        e=(85*a)/100;
        printf("%d",e);

    }
    else if(b>365)
    {
        f=(90*a)/100;
        printf("%d",f);

    }



return 0;
}

