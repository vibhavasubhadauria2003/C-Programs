// This code is only for sorted array
#include <stdio.h>
void input(int a[],int n)
{
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
}
int linear(int a[],int n,int item)
{
    int found=0;
    for(int i=0;i<n&&a[i]<=item&&found==0;i++)
    {
        if(a[i]==item)
          found=1;
    }
    return found;
}
int main()
{
    int a[10],n;
    int item;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array\n");
    input(a,n);
    printf("Enter the item to find\n");
    scanf("%d",&item);
    if(linear(a,n,item)==1)
        printf("yess");
    else
        printf("noo");
}
