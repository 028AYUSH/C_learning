#include <stdio.h>
#include <stdlib.h>

 struct node{
    int data;
    struct node*link;
    }*head;
struct node*head=NULL;

create(int data){
     struct node *tmp,*tmp2;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->data=data;
    tmp->link=NULL;

    tmp2=head;

    if(head==NULL)
        head=tmp;

    else
    {
        while(tmp2->link!=NULL)
        {
          tmp2=tmp2->link;

        }
        tmp2->link=tmp;

    }


    }
 show(){
     struct node*tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp=head;
    while(tmp!=NULL){
        printf("%d ",tmp->data);
        tmp=tmp->link;
    }
 }

int main()
{
    int choice;
    int data,a;
    while(1){

        printf("\n1. for creation\n 2. for insertion after\n 3.insertion before \n4. for deletion\n 5.for showing \n 6.for reversing");
        printf("\nenter your choice ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("how many nodes do you want ");
            scanf("%d",&a);
            for(int i=1;i<=a;i++)
            {
             printf("enter data ");
             scanf("%d",&data);
             create(data);
            }
             break;

        case 2:
            show();
            break;
        default:
            break;
        }
    }
    return 0;
}
