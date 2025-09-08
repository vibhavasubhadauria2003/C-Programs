//8.Sort the array using selection sort.

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
void selectSort(int a[],int n){
    int i,j,tem,min,minIndex;
    for(i=0;i<n-1;i++){
        min=a[i];
        minIndex=i;
        for(j=i+1;j<n;j++){
            if(min>a[j]){
                min=a[j];
                minIndex=j;
            }
        }
        a[minIndex]=a[i];
        a[i]=min;
    }
}

void  main(){
    int n,a[50],x,found;
    printf("Enter the limit of array\n");
    scanf("%d",&n);
    inputArray(a,n);
    displayArray(a,n);
    selectSort(a,n);
    printf("\nAfter sorting\n");
    displayArray(a,n);
}