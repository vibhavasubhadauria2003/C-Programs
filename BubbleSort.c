#include <stdio.h>
void input(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
      printf("%d\n",a[i]);
}
void bubble(int a[],int n)
{
    int i,j,swap;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-(i);j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }
}
void main() 
{
    int a[25],n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array\n");
    input(a,n);
    bubble(a,n);
    printf("Sorted array is\n");
    print(a,n);
}
