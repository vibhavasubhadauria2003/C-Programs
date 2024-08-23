#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
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
        first=add;first->next=first;
    }
    else
    {
        if(first->next==first)
        {
            first->next=add;
            add->next=first;
        }
        else
        {
            last=first->next;
            while(last->next!=first)
            {
                last=last->next;
            }
            last->next=add;
            add->next=first;
        }
    }
}
void deletionstack()
{
    struct node *temp,*temp2;
    if(first==NULL)
    {
        printf("Deletion not possible\n");
    }
    else
    {
        temp=first;
        if(temp->next==first)
        {
            first=NULL;
            free(temp);
        }
        else
        {
            while(temp->next!=first)
            {
                temp2=temp;
                temp=temp->next;
            }
            temp2->next=first;
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
