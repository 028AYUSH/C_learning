#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*link;
    };

void print_data(struct node*head)
{
    if(head==NULL)
        printf("the linklist is empty");
    struct node*ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf(" %d ",ptr->data);
        ptr=ptr->link;
    }
}

void add_at_pos(struct node*head,int data,int pos)
{
    struct node*ptr=head;
    struct node*ptr2=malloc(sizeof(struct node));

    ptr2->data=data;
    ptr2->link=NULL;

    pos--;
    while(pos!=1)
    {
        ptr=ptr->link;
        pos--;
    }
    ptr2->link=ptr->link;
    ptr->link=ptr2;
}

int main()
{
    struct node*head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node*head1=malloc(sizeof(struct node));
    head1->data=93;
    head1->link=NULL;
    head->link=head1;

    head1=malloc(sizeof(struct node));
    head1->data=33;
    head1->link=NULL;
    head->link->link=head1;

    int d=32;
    int pos;
    scanf("%d",&pos);
    add_at_pos(head,d,pos);

    print_data(head);


    return 0;
}
