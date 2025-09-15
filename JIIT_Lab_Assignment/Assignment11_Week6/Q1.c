//1. Write a program using structures to read and display the information about a student.

#include<stdio.h>

struct Student{
    int id;
    char firstName[20],lastName[20],email[30],gender[10];
    int age;
};

void displayStudent(struct Student s){
    printf("\nStudent ID: %d",s.id);
    printf("\nStudent Name: %s %s",s.firstName,s.lastName);
    printf("\nAge: %d",s.age);
    printf("\nEmail: %s",s.email);
    printf("\nGender: %s",s.gender);
}
struct Student inputStudent(){
    struct Student s;
    printf("Enter the details of Student\n");
    printf("ID: ");
    scanf("%d",&s.id);
    printf("First Name: ");
    scanf("%s",&s.firstName);
    printf("Last Name: ");
    scanf("%s",&s.lastName);
    printf("Email: ");
    scanf("%s",&s.email);
    printf("Age: ",&s.age);
    scanf("%d",&s.age);
    printf("Gender: ");
    scanf("%s",&s.gender);
    return s;
}
void main(){
    struct Student s1;
    s1=inputStudent();
    displayStudent(s1);
}
