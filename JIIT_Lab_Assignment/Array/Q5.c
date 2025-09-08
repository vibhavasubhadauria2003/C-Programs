//5.Count the frequency of each element in an array.

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
    int i,found=0;
    for(i=0;i<m;i++){
        if(a[i]==x){
            found=1;
            break;
        }
    }
    return found;
}
int findFrequency(int x,int a[],int n){
    int i,freq=0;
    for(i=0;i<n;i++){
        if(a[i]==x){
            freq++;
        }
    }
    return freq;
}
void frequency(int a[],int n){
    int i,d[50],c,m=0,freq;
    for(i=0;i<n;i++){
        c=searchElement(a[i],d,m);
        if(c==0){
            freq=findFrequency(a[i],a,n);
            printf("\nFrequency of %d : %d",a[i],freq);
            d[m]=a[i];
            m++;
        }
    }
}
void  main(){
    int n,a[50];
    printf("Enter the limit of array\n");
    scanf("%d",&n);
    inputArray(a,n);
    displayArray(a,n);
    frequency(a,n);
}