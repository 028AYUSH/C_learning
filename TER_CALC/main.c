#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    int choice;
    while(1){
        printf("\n 1. For Additon\n 2. For Subtracton\n 3.For Multiplication\n 4.For Division\n 5.For exit\n");
         printf("\nWhat operation do you want : ");
        scanf("%d",&choice);
        if(choice==5){
            return;
        }

        printf("\n 1st input : ");
        scanf("%f",&a);
        printf("\n 2nd input : ");
        scanf("%f",&b);

        (choice == 1) ? (c=a+b):(choice == 2) ? (c=a-b):(choice == 3) ? (c=a*b):(choice == 4) ? (c=a/b):(c=0);
        printf("%0.2f",c);

    }
    return 0;
}
