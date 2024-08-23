// Sum of factorial of n numbers
// 0!+1!+2!+3!+4!.......n!
// (hint- nth term will be n-1 because series starts with 0)


#include <stdio.h>

int factorial(int n)
{
    int fact;
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        fact=n*factorial(n-1);
        return fact;
    }
}
int sums(int n)
{
    int sum;
    if(n==0)
    return 1;
    else
    {
        sum=factorial(n)+sums(n-1);
    }
}
int main()
{
    printf("Enter no\n");
    int n;
    scanf("%d",&n);
    int sum=sums(n-1);
    printf("%d",sum);
}
