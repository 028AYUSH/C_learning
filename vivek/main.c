#include<stdio.h>
#include<math.h>
     int main()
     {  int a,b, sum, sub, div, mul;
         printf("Enter a number a: ");
         printf("Enter a number b: ");
          scanf("%d%d", &a, &b);

        sum = a + b;
        sub = a - b;
        div = a / b;
        mul = a * b;

    printf("%d \n", sum);
    printf("%d \n", sub);
    printf("%d \n", div);
    printf("%d \n", mul);
    return 0;
     }
