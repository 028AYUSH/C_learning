#include <stdio.h>
#include <stdlib.h>
struct person{
    int age;
    int sal;

};

int main()
{
    struct person p;

    printf("\n\nTaking user input");
    printf("\n please enter the age of the person: ");
    scanf("%d",&p.age);
    printf("\n please enter the salary of a person: ");
    scanf("%d",&p.sal);

    printf("\n\n  displaying the content...");
    printf("\n so age of the person is %d...",p.age);
    printf("\n so the salary of the person is %d...",p.sal);

printf("\nsizeof(p)=%d,sizeof(p.age)=%d,sizeof(p.sal)=%d",sizeof(p),sizeof(p.age),sizeof(p.sal));

    printf("\n\n end of the program...");
    return 0;
}
