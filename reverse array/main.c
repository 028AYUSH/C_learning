#include <stdio.h>
#include <stdlib.h>
reverse_array(int n,int arr[n])
{
    int i,j,temp;
    for(i=0,j=n-1;i!=j+1&&i!=j;i++,j--)
    {
      temp = arr[i];
      arr[i] =  arr[j];
      arr[j] = temp;
    }
    for(int k=0;k<n;k++)
    {
        printf("%d ",arr[k]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&ar[i]);
    }

    reverse_array(n,ar);



    return 0;
}
