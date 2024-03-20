#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ int n;
  int h;
    printf("\n enter a value ");
    scanf("%d",&n);
    printf("enter the number ");
    scanf("%d",&h);
    int sum=0;
     int d=h;

     for(int i = 1;i<=n;i++){

       sum = sum+d;
       d= 10*d + h;


     }
         printf(" \n %d",sum);

    return 0;
}
