#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("enter %d value in array",i);
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
