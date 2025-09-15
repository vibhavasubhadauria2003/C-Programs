// 6. Define a structure to store the name, an array marks[] which stores the marks of three
// different subjects, and a character grade. Write a program to display the details of the
// student whose name is entered by the user. Use the structure definition of the first
// question to make an array of students. Display the name of the students who have
// secured less than 40% of the aggregate.


#include<stdio.h>

struct Student{
    char firstName[20],lastName[20],grade;
    int marks[3];
};

void displayStudent(struct Student s){
    int i;
    printf("\nStudent Name: %s %s\n",s.firstName,s.lastName);
    for(i=0;i<3;i++){
        printf("Marks of Subject%d : %d\n",i+1,s.marks[i]);
    }
    printf("Grade: %c",s.grade);
}
struct Student inputStudent(){
    struct Student s;
    int i,tm=0;
    float per;
    printf("First Name: ");
    scanf("%s",s.firstName);
    printf("Last Name: ");
    scanf("%s",s.lastName);
    
    for(i=0;i<3;i++){
        printf("Enter Marks of Subject%d : ",i+1);
        scanf("%d",&s.marks[i]);
        tm=tm+s.marks[i];
    }
    per=tm*1.0/300*100;
    if(per>=90)
    s.grade='A';
    else if(per>=80)
    s.grade='B';
    else if(per>=70)
    s.grade='C';
    else if(per>=40)
    s.grade='D';
    else
    s.grade='F';
    return s;
}
void main(){
    int i,n;
    struct Student s[30];
    printf("Enter size: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter the details of Student%d\n",i+1);
        s[i]=inputStudent();
    }
    for(i=0;i<n;i++){
        if(s[i].grade!='F')
        displayStudent(s[i]);
    }
}
