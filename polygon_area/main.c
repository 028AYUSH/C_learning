#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("NO. of sides = ");
    scanf("%d",&n);
    int x[n];
    int y[n];
    int area=0;
    for(int i=0;i<n;i++)
    {
        printf("\nenter %d cordinate = ",i+1);
        scanf("%d %d",&x[i],&y[i]);
    }
    for(int i=0;i<n;i++)
    {
        area+=(x[i+1]*y[i]-x[i]*y[i+1])/2;
    }
    printf(" [%d] ",area);
    return 0;
}
