#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int ar[5]={10000,2555,10000,49,555};
   int max=INT_MIN;
    int smax=INT_MIN;

    for(int i=0;i<5;i++)
    {
        if(max<ar[i])
        {   smax=max;
            max=ar[i];
        }
        else if(smax<ar[i]&&max!=ar[i])
          smax=ar[i];
    }
    printf("%d",max);


    printf("\n %d",smax);
    return 0;
}
