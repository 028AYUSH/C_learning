#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
   printf("enter size : ");
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
       printf("enter %d element : ",i);
       scanf("%d",&a[i]);
   }
   int b[n];
   for(int i=0;i<n;i++)
   {
       b[i]=a[n-1-i];
   }
    for(int i=0;i<n;i++)
   {
       printf("b[%d] : %d  \n",i,b[i]);
   }

    return 0;
}
