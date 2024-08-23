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
int binary(int a[],int n,int item)
{
    int f=0,l=n-1,m,found=0;
   
    while(f<=l&&found==0)
    {
        m=(f+l)/2;
        if(a[m]==item)
        {
            found=1;
        }
        else
        {
            if(item<a[m])
                l=m-1;
            else
                f=m+1;
        }
    }
    return found;
}
void main()
{
    int a[25],n,found,item;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array\n");
    input(a,n);
    insertion(a,n);
   // print_array(a,n);
    printf("Enter the item to find\n");
    scanf("%d",&item);
    found=binary(a,n,item);
    if(found==1)
      printf("yess");
    else
      printf("nooo");
}
