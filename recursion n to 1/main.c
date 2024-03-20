#include <stdio.h>
#include <stdlib.h>
 decresing(int n)
{
     if(n==0) return ;


    printf("%d \n",n);
    decresing(n-1);
    // printf("%d \n",n);


    return  ;

}
int main()
{ int n,d;
    printf("\n enter value ");
    scanf("%d",&n);
     d= decresing(n);
    return 0;
}
