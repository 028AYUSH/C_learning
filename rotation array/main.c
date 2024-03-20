#include <stdio.h>
#include <stdlib.h>

rotate(int n,int d,int arr[n])
{
    int t;
    for(int i=0;i<d;i++)
    {
        int e=arr[0];
        for(int i=0;i<n;i++)
   {

        arr[i]=arr[i+1];
   }
   arr[n-1]=e;
    }



   for(int i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }
}
int main()
{
    int n,d;
    scanf("%d",&n);
    scanf("%d",&d);

    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    rotate(n,d,a);


    return 0;
}
