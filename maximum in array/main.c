#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
    printf("enter size of array \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter %d element ",i);
        scanf("%d",&arr[i]);
    }
    int t=arr[0];
    for(int i=0;i<n;i++)
    {
        if(t<arr[i])
            t=arr[i];
    }
    printf("%d",t);
    return 0;
}
