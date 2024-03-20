#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,i;
printf("\n enter a value ");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    { if(a[i]<35)
      printf("%d ",i);
    }
    return 0;
}
