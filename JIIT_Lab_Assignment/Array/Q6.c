//6.Implement linear search on an array.

#include<stdio.h>
void inputArray(int a[],int n){
    int i;
    printf("=> Now Enter the elements of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void displayArray(int a[],int n){
    int i;
    printf("Your Array is\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int searchElement(int x,int a[],int m){
    int i,found=-1;
    for(i=0;i<m;i++){
        if(a[i]==x){
            found=i;
            break;
        }
    }
    return found;
}

void  main(){
    int n,a[50],x,found;
    printf("Enter the limit of array\n");
    scanf("%d",&n);
    inputArray(a,n);
    displayArray(a,n);
    printf("\nEnter number to be searched\n");
    scanf("%d",&x);
    found=searchElement(x,a,n);
    if(found>0){
        printf("Number found at index: %d",found);
    }
    else{
        printf("Number not found");
    }
}
