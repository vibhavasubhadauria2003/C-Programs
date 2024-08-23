// Program to perform classroom problem 

#include<stdio.h>

struct class
{
    char name[20];
    int rno,marks;
}s[10];

void inputs(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the name Roll no and marks of student %d\n",i+1);
        scanf("%s%d%d",s[i].name,&s[i].rno,&s[i].marks);
    }
}
void print(int n)
{
    printf("Data of Passed students\n");
    for(int i=0;i<n;i++)
    {
        if(s[i].marks>=7)
        {
            puts(s[i].name);
            printf("Roll no %d \nMarks %d\n",s[i].rno,s[i].marks);
        }
    }
    printf("Data of failed students\n");
    for(int i=0;i<n;i++)
    {
        if(s[i].marks<7)
        {
            puts(s[i].name);
            printf("Roll no %d \nMarks %d",s[i].rno,s[i].marks);
        }
    }
}
void main()
{
    int n=5;
    inputs(n);
    print(n);
}
