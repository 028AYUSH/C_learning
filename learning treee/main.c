#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createnode(int data){

    struct node* n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

int main()
{
    printf("Hello world!\n");
    struct node *p = createnode(4);
    struct node *p1 = createnode(5);
    struct node *p2 = createnode(6);

    p->left = p1;
    p->right = p2;
    return 0;
}
