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
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
      printf("%d\n",a[i]);
}
void main() 
{
    int a[25],n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array\n");
    input(a,n);
    insertion(a,n);
    printf("Sorted array is\n");
    print(a,n);
}
