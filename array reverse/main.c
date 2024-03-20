#include <stdio.h>
#include <stdlib.h>

int main()
{ int arr[5];
for(int i=0;i<=4;i++){
    printf("\n the array limit ");
    scanf("%d",&arr[i]);
   }
   for (int i=4;i>=0;i--)
    printf("%d \n",arr[i]);
    return 0;
}
