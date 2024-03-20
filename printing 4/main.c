#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,c=0;
    printf("\n enter the value ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {c=c+1;
          if(j%2!=0)
            printf("%d ",c);
        }
        printf("\n");
        c=0;
    }
    return 0;
}
