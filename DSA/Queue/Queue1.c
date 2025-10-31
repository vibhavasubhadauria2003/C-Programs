#define maxqueue 4
#include<stdio.h>

struct queue{
    int item[maxqueue];
    int front,rear;
};
int isemptyQueue(struct queue q){
    return q.front==q.rear;
}
int isfullQueue(struct queue q){
    return q.rear+1==q.front||(q.rear+1)-maxqueue==q.front;
}
struct queue inputItem(struct queue q){
    int n,r;
    if(isfullQueue(q)==1){
        printf("Queue is full\n");
    }
    else{
        printf("Enter item: ");
        scanf("%d",&n);
        r=q.rear;
        q.item[r]=n;
        if(maxqueue==r+1){
            q.rear=0;
        }
        else{
            q.rear++;
        }
        return q;
    }
}
struct queue deleteItem(struct queue q){
    if(isemptyQueue(q)==1){
        printf("Queue is empty\n");
    }
    else{
        printf("Removed Item: %d\n",q.item[q.front]);
        if(q.front+1==maxqueue){
            q.front=0;
        }
        else{
            q.front++;
        }
    }
    return q;
}
void main(){
    struct queue q;
    q.front=maxqueue-1;
    q.rear=maxqueue-1;
    int n;
    do
    {
        printf("Enter 1 to inset\n2 to remove\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            q=inputItem(q);
            break;
        case 2:
            q=deleteItem(q);
            break;
        default:
            printf("Wrong Input");
            break;
        }
        printf("Enter 0 to exit or any other to repeat");
        scanf("%d",&n);
    } while (n!=0);
    
}