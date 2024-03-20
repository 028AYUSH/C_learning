/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i,j;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
        {

         if(a%i==0)


         for(j=1;j<=b;j++){
         if(b%j==0){
            if(i==j)
                printf("%d ",j);


    }

         }
        }
    return 0;
}*/
#include <stdio.h>

int main()
{
    int a, b, remainder;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("HCF of %d and %d is ", a, b);

    // Euclidean algorithm to find HCF
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("%d", a);

    return 0;
}

