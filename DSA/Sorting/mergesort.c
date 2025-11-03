#include<stdio.h>


void merge(int a[],int f,int m,int l){
    int b[20];
    int i=f,j=m+1,k=0;
    
    while(i<=m&&j<=l){
        if(a[i]<a[j]){
            b[k++]=a[i++];
        }
        else{
            b[k++]=a[j++];
        }
    }
    while(i<=m){
        b[k++]=a[i++];
    }
    while(j<=l){
        b[k++]=a[j++];
    }
    
    for(i=f,k=0;i<=l;i++,k++){
        a[i]=b[k];
    }
}
void printA(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void mergeSort(int a[],int f,int l){
    int m=(f+l)/2;
    if(f<l){
        mergeSort(a,f,m);
        mergeSort(a,m+1,l);
        merge(a,f,m,l);
    }
}
void main(){
    int a[]={5,11,33,1,23,41,44,45,46};
    printA(a,9);
    mergeSort(a,0,8);
    printf("\n");
    printA(a,9);
}