//2.Find the sum and average of elements of an array.

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
void sumAvg(int a[],int n){
    int i,sum=0;
    float avg;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    avg=(sum*1.0)/n;
    printf("\nSum of array is: %d",sum);
    printf("\nAverage of array is: %.2f",avg);
}
void  main(){
    int n,a[50];
    printf("Enter the limit of array\n");
    scanf("%d",&n);
    inputArray(a,n);
    displayArray(a,n);
    sumAvg(a,n);
}
