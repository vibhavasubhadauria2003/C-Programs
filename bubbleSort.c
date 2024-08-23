#include <stdio.h>

void input(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
}
void selectsort(int a[],int n)
{
    int i,j,smallest,smallestindex;
    for(i=0;i<n-1;i++)
    {
        smallest=a[i];
        smallestindex=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<smallest)
            {
                smallest=a[j];
                smallestindex=j;
            }
        }
        a[smallestindex]=a[i];
        a[i]=smallest;
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
    selectsort(a,n);
    printf("Sorted array is\n");
    print(a,n);
}
