// Online C compiler to run C program online
#include <stdio.h>
void input(int a[],int n)
{
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
}
void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
      printf("%d\n",a[i]);
}
void merge(int a[],int first,int mid,int last)
{
    int b[25],i=first,j=mid+1,k=0;
    while(i<=mid&&j<=last)
    {
        if(a[i]<a[j])
          b[k++]=a[i++];
        else
          b[k++]=a[j++];
    }
    if(i==mid+1)
      while(j<=last)
        b[k++]=a[j++];
    else
      while(i<=mid)
       b[k++]=a[i++];
    for(int q=0,r=first;r<=last;q++,r++)
      a[r]=b[q];
}
void merge_sort(int a[],int f,int l)
{
    if(f<l)
    {
        int mid=(f+l)/2;
        merge_sort(a,f,mid);
        merge_sort(a,mid+1,l);
        merge(a,f,mid,l);
    }
}
void main()
{
    int a[25],n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array\n");
    input(a,n);
    merge_sort(a,0,n-1);
    printf("sorted data is\n");
    print_array(a,n);
}
