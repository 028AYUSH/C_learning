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
    int product=1;
    for(int i=0;i<5;i++)
    {
        product=product*arr[i];
    }
    printf("%d",product);
    return 0;
}
