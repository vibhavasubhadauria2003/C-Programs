#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev,*next;
};
struct node *first;

void insertion()
{
    struct node *add,*last;
    add=(struct node*)malloc(sizeof(struct node));
    printf("Enter the node\n");
    scanf("%d",&add->data);
   
    if(first==NULL)
    {
        first=add;
        first->next=first;
        first->prev=first;
    }
    else
    {
        if(first->next==first)
        {
            first->next=add;
            first->prev=add;
            add->prev=first;
            add->next=first;
            
        }
        else
        {
            last=first->prev;
            
            last->next=add;
            add->next=first;
            add->prev=last;
            first->prev=add;
        }
    }
}
void deletionstack()
{
    struct node *temp;
    temp=first;
    if(first==NULL)
    {
        printf("Deletion not possible\n");
    }
    else
    {
        if(first->next==first)
        {
            first=NULL;
            free(temp);
        }
        else
        {
            temp=first->prev;
            first->prev=temp->prev;
            temp->prev->next=first;
            free(temp);
        }
    }
}
void traverse()
{
    struct node *tem;
    if(first==NULL)
    {
        printf("There is no node to print\n");
    }
    else
    {
        printf("Node is %d\n",first->data);
        tem=first->next;
        while(tem!=first)
        {
            printf("Node is %d\n",tem->data);
            tem=tem->next;
        }
    }
}
void main()
{
    int n;
    first=NULL;
    printf("Enter 1 for insertion\nEnter 2 for Printing\nEnter 3 for Deletion");
    do
    {
        printf("Enter your option\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:insertion();
            break;
            case 2:traverse();
            break;
            case 3:deletionstack();
        }
    }while(n==1||n==2||n==3);
}
