#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    int choice;
    while(1){
        printf("\n 1. For Additon\n 2. For Subtracton\n 3.For Multiplication\n 4.For Division\n 5.For exit\n");
        printf("\n 1st input : ");
        scanf("%f",&a);
        printf("\n 2nd input : ");
        scanf("%f",&b);
        printf("\nWhat operation do you want : ");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            c=a+b;
            printf("\n%0.2f",c);
            break;
        case 2:
            c=a-b;
            printf("\n%0.2f",c);
            break;
        case 3:
            c=a*b;
            printf("\n%0.2f",c);
            break;
        case 4:
            c=a/b;
            printf("\n%0.2f",c);
            break;
        case 5:
            return 0;
            break;
        default:
            printf("Invalid Response");
            break;


        }

    }
    return 0;
}
