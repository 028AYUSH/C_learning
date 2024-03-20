#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,i,j,a;
    printf("\n enter a number ");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        printf("enter %d element",i);
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]>ar[j]);
            {
            a=ar[i];
            ar[i]= ar[j];
            ar[j]=a;
            }
        }
    }
    for( i=0;i<n;i++)
    {
        printf("[%d]",ar[i]);
    }
    return 0;
}
