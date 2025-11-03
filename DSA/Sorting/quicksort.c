#include<stdio.h>
int seprate(int a[],int f,int l){
    int p=f,i,t;
    int start=f+1,end=l;
    while(start<=end){
        if(a[start]<=a[p]){
            start++;
        }
        else if(a[end]>a[p]){
            end--;
        }
        else{
            t=a[start];
            a[start]=a[end];
            a[end]=t;
        }
    }
    t=a[end];
    a[end]=a[p];
    a[p]=t;
    return end;
}
void quickSort(int a[],int f,int l){
    
    if(f<l){
        int p=seprate(a,f,l);
        quickSort(a,f,p-1);
        quickSort(a,p+1,l);
    }
}
void printA(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void main(){
    int a[]={4,8,7,6,5,4,3,2,1};
    printA(a,9);
    quickSort(a,0,8);
    printf("\n");
    printA(a,9);
}