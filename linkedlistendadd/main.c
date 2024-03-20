#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int data;
    struct node*link;
    };

addatend(struct node*head,int data){
    struct node*temp2;
    temp2=head;
    struct node*temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    if(head==NULL)
    {
       head=temp;
    }
    else{
            while(temp2->link!=NULL)
            {
                temp2=temp2->link;
            }
            temp2->link=temp;

    }

    }
print(struct node*head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->link;
    }

}

int main()
{
    int data,daa;
    printf("enter data ");
    scanf("%d",&data);
    scanf("%d",&daa);
    struct node*head=malloc(sizeof(struct node));
    if(daa=1)
        addatend(head,data);
    print(head);
return 0;
}

