#include <stdio.h>
#include <stdlib.h>
void change(int a [])
{
    for(int i=0;i<5;i++)
    {
        if(i%2==0)
        a[i]=a[i]+10;
        else
        a[i]=2*a[i];
    }
    return 0;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    printf("%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);
     change(arr);
    printf("\n%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);
    return 0;

}
