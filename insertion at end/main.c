#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*link;
};
void print_data(struct node*head){
    if(head==NULL)
        printf("linked list is empty");
    struct node*ptr=NULL;
    ptr=head;

    while(ptr!=NULL){
        printf(" %d ",ptr->data);
        ptr=ptr->link;
    }


    }

struct node*add_at_end(struct node*ptr,int data)
{
    struct node*temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    ptr->link=temp;
    return temp;
}

int main()
{
    struct node*head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node*current=malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=3;
    current->link=NULL;

    head->link->link=current;

    struct node*ptr=current;
    ptr=add_at_end(ptr,99);
    ptr=add_at_end(ptr,981);


   print_data(head);


    return 0;
}
