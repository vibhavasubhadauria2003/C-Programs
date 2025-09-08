//7.Sort the array using bubble sort.

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
void bubbleSort(int a[],int n){
    int i,j,tem;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                tem=a[j];
                a[j]=a[j+1];
                a[j+1]=tem;
            }
        }
    }
}

void  main(){
    int n,a[50],x,found;
    printf("Enter the limit of array\n");
    scanf("%d",&n);
    inputArray(a,n);
    displayArray(a,n);
    bubbleSort(a,n);
    printf("\nAfter sorting\n");
    displayArray(a,n);
}