#include <stdio.h>
#include <stdlib.h>
 void reverse(int arr[],int n)
{ int i=0;
   int j=n-1;
    while(i<j)
    {
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i++;
        j--;

    }
    return;
}
int main()
{ int n;
    printf("\n enter size: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
      printf("enter %d element ",i);
      scanf("%d",&a[i]);
    }
    reverse(a,n);
    for(int i=0;i<n;i++)
    {
      printf(" %d",a[i]);
    }

    return 0;
}
