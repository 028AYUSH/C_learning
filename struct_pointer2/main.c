#include <stdio.h>
#include <stdlib.h>
struct person{
    int age;
    int sal;

};

int main()
{
    struct person p;
    struct person person_input(void);
    void person_display(struct person);

    p=person_input();
    person_display(p);
    printf("\n\nEnd of the program");

    printf("\n\n end of the program...");
    return 0;
}
struct person person_input(){
    struct person pp;
    printf("\n\nTaking user input");
    printf("\n please enter the age of the person: ");
    scanf("%d",&pp.age);
    printf("\n please enter the salary of a person: ");
    scanf("%d",&pp.sal);
    return pp;


    }
void person_display(struct person ppp){
    printf("\n\n  displaying the content...");
    printf("\n so age of the person is %d...",ppp.age);
    printf("\n so the salary of the person is %d...",ppp.sal);
    printf("\nsizeof(p)=%d,sizeof(p.age)=%d,sizeof(p.sal)=%d",sizeof(ppp),sizeof(ppp.age),sizeof(ppp.sal));

}
