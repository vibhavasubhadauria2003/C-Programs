#include <stdio.h>

void input(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
}
void insertion(int a[],int n)
{
    int i,j,tem;
    for(i=1;i<n;i++)
    {
        tem=a[i];
        for(j=i-1;j>=0&&tem<a[j];j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=tem;
    }
}
void merge(int a[],int m,int b[],int n,int c[])
{
    int i=0,j=0,k=0;
    while(i<m&&j<n)
    {
        if(a[i]<b[j])
          c[k++]=a[i++];
        else
          c[k++]=b[j++];
    }
    if(i==m)
    {
        while(j<n)
          c[k++]=b[j++];
    }
    else
    {
        while(i<m)
          c[k++]=a[i++];
    }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
      printf("%d\n",a[i]);
}
void main()
{
    int a[25],m,b[25],n,c[50];
    printf("Enter the size of first array\n");
    scanf("%d",&m);
    printf("Enter the first array\n");
    input(a,m);
    printf("Enter the size of second array\n");
    scanf("%d",&n);
    printf("Enter the second array\n");
    input(b,n);
    insertion(a,m);
    insertion(b,n);
    merge(a,m,b,n,c);
    printf("Merged data is\n");
    print(c,m+n);
}
