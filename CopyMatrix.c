// Copy data of matrix to other matrix
#include<stdio.h>

void input(int a[5][5],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void Copy(int a[5][5],int b[5][5],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[i][j]=a[i][j];
        }
    }
}
void print(int a[5][5],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void main() 
{
    int a[5][5],b[5][5],m,n;
    printf("Enter the number of rows\n");
    scanf("%d",&m);
    printf("Enter the number of columns\n");
    scanf("%d",&n);
    printf("Enter the array\n");
    input(a,m,n);
    Copy(a,b,m,n);
    printf("Original array is\n");
    print(a,m,n);
    printf("Copied array is\n");
    print(b,m,n);
}
