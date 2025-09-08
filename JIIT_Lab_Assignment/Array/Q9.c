//9.Sort the array using insertion sort.

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
void insertionSort(int a[],int n){
    int i,j,term,index;
    for(i=1;i<n;i++){
        term=a[i];
        for(j=i-1;j>=0;j--){
            if(term<a[j]){
                a[j+1]=a[j];
                index=j;
            }
        }
        a[index]=term;
    }
}

void  main(){
    int n,a[50],x,found;
    printf("Enter the limit of array\n");
    scanf("%d",&n);
    inputArray(a,n);
    displayArray(a,n);
    insertionSort(a,n);
    printf("\nAfter sorting\n");
    displayArray(a,n);
}