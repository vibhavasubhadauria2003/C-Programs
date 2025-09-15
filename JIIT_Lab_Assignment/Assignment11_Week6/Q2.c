//2. Write a program to read and display the information of a student using a nested structure.

#include<stdio.h>

struct Student{
    int id;
    char email[50],gender[10];
    int age;
    struct Name{
        char firstName[20],middleName[10],lastName[20];
    }name;
};

void displayStudent(struct Student s){
    printf("\nStudent ID: %d",s.id);
    printf("\nStudent Name: %s %s %s",s.name.firstName,s.name.middleName,s.name.lastName);
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
    scanf("%s",&s.name.firstName);
    printf("Middle Name: ");
    scanf("%s",&s.name.middleName);
    printf("Last Name: ");
    scanf("%s",&s.name.lastName);
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
