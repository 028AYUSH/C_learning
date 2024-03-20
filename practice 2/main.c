#include <stdio.h>
#include <stdlib.h>

 struct node{
    int data;
    struct node*link;
    }*head;
struct node*head=NULL;

struct node*create(int data){
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
 struct node*show(){
     struct node*tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp=head;
    while(tmp!=NULL){
        printf("%d ",tmp->data);
        tmp=tmp->link;
    }
 }

struct node* delete(int data){

    struct node*temp,*temp2;
    temp2=head;
    temp=head;
    int a;

    if(head->data==data){
        head=head->link;
        free(temp2);
    }
    else{
         while(temp2!=NULL){
       if(temp2->data==data)
       {
           break;
       }
       temp=temp2;
       temp2=temp2->link;


    }
    temp->link=temp2->link;
    free(temp2);
    }

return;

 }




int main()
{
    int choice;
    int data,a,b;
    while(1){

        printf("\n1. for creation\n 2. for display \n3.for deletion ");
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

        case 3:
            printf("how many nodes do you want delete ");
            scanf("%d",&a);
            for(int i=1;i<=a;i++)
            {
             printf("enter data ");
             scanf("%d",&data);
             delete(data);
            }
            break;

        default:
            break;
        }
    }
    return 0;
}
