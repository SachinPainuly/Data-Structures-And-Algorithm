#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void create(struct node *,int);
void recursion_display(struct node *);
int main()
{
    int size,x;
    struct node *first;
    first=(struct node *)malloc(sizeof(struct node));
    if(first==NULL)
    {
        printf("Can not Allocate memory.....");
    }
    printf("Enter the size of the Linked List:\n");
    scanf("%d",&size);
    printf("Enter the data of node 1: ");
    scanf("%d",&x);
    first->data=x;
    first->next=NULL;
    struct node *ptr=first;
    create(ptr,size);
    recursion_display(first);
    return 0;
}
void create(struct node *p,int n)
{
    int num;
    struct node *a;
    for(int i=2;i<=n;i++)
    {
        a=(struct node *)malloc(sizeof(struct node));
        if(a==NULL)
            {
                printf("Can not Allocate memory.....");
            }
    printf("Enter the data of node %d: ",i);
    scanf("%d",&num);
    a->data=num;
    a->next=NULL;
    p->next=a;
    p=p->next;
    }
}
recursion_display(struct node *p)
{
    if(p==NULL)
     return 0;
    else
    {
       recursion_display(p->next);
       printf(" %d ->",p->data);
    }
}
