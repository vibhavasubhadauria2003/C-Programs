#include<stdio.h>
#include<stdlib.h>
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
    printf("Enter the node to insert\n");
    scanf("%d",&add->data);
   
    if(first==NULL)
    {
        first=add;
        first->prev=NULL;
        first->next=NULL;
    }
    else
    {
        last=first;
        while(last->next!=NULL)
          last=last->next;
         
        last->next=add;
        add->prev=last;
        add->next=NULL;
    }
}
void deletionstack()
{
    struct node *tem,*tem2;
    tem=first;
    if(first==NULL)
    {
        printf("Nothing to Delete\n");
    }
    else
    {
        if(first->next==NULL)
        {
            first=NULL;
        }
        else
        {
            while(tem->next!=NULL)
            {
                tem2=tem;
                tem=tem->next;
            }
            tem2->next=NULL;
        }    
        free(tem);
    }
    
}
void traverse()
{
    struct node *tem;
    tem=first;
    if(first==NULL)
    {
        printf("Link List is empty\n");
    }
    while(tem!=NULL)
    {
        printf("Element is: %d\n",tem->data);
        tem=tem->next;
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
