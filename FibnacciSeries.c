// To print a fibonacci series upto n terms using recurtion
//    1 1 2 3 5 8 .... n

#include <stdio.h>
int n;
int fib(int a,int b,int count)
{
    if(count==n)
        return 0;
    else
    {
        printf("%d ",b);
        fib(b,b+a,count+1);
        return 0;
    }
}
int main()
{
    printf("Enter no\n");
    int a=1,b=1;
    scanf("%d",&n);
    printf("%d ",a);
    fib(a,b,1);
}
