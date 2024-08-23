// print series 
// 2,4,6,8,10,12.....nth term

#include <stdio.h>

int even(int n)
{
    int fact;
    if(n==0)
    {
        return 0;
    }
    else
    {
        even(n-2);
        printf("%d ",n);
        return 0;
    }
}
int main()
{
    printf("Enter no\n");
    int n;
    scanf("%d",&n);
    even(n*2);
}
