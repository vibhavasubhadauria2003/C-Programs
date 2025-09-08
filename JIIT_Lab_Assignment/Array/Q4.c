//4.Reverse the elements of an array.
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
void reverseArray(int a[],int n){
    int i,tem;
    for(i=0;i<n/2;i++){
        tem=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=tem;
    }
}
void  main(){
    int n,a[50];
    printf("Enter the limit of array\n");
    scanf("%d",&n);
    inputArray(a,n);
    displayArray(a,n);
    reverseArray(a,n);
    printf("\nArray after reversing\n");
    displayArray(a,n);

}

