#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,i,j,k,sum=0;
   printf("enter a number ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n-i;j++)
       {
          printf("  ");

       }
       for(k=1;k<2*i;k++)
       {
           printf("%d ",k);
       }
       printf("\n");

   }

    return 0;
}
