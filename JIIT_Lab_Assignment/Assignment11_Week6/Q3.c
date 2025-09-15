//3. Write a program to read and display the information of all the students in a class. Then
//edit the details of the ith student and redisplay the entire information

#include<stdio.h>

struct Student{
    int id;
    char firstName[20],lastName[20],email[30],gender[10];
    int age;
};

void displayStudent(struct Student s[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("\nStudent ID: %d",s[i].id);
        printf("\nStudent Name: %s %s",s[i].firstName,s[i].lastName);
        printf("\nAge: %d",s[i].age);
        printf("\nEmail: %s",s[i].email);
        printf("\nGender: %s",s[i].gender);
    }
}
void inputStudent(struct Student s[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("Enter the details of Student %d\n",i+1);
        printf("ID: ");
        scanf("%d",&s[i].id);
        printf("First Name: ");
        scanf("%s",&s[i].firstName);
        printf("Last Name: ");
        scanf("%s",&s[i].lastName);
        printf("Email: ");
        scanf("%s",&s[i].email);
        printf("Age: ",&s[i].age);
        scanf("%d",&s[i].age);
        printf("Gender: ");
        scanf("%s",&s[i].gender);
    }
}
void editStudent(struct Student s[],int n){
    int i,index;
    printf("\nChoose\n");
    for(i=0;i<n;i++){
        printf("Index: %d Id: %d Name: %s %s\n",i,s[i].id,s[i].firstName,s[i].lastName);
    }
    printf("Choose Index\n");
    scanf("%d",&index);
    printf("Edit the details of Student %d\n",index+1);
        printf("ID: ");
        scanf("%d",&s[index].id);
        printf("First Name: ");
        scanf("%s",&s[index].firstName);
        printf("Last Name: ");
        scanf("%s",&s[index].lastName);
        printf("Email: ");
        scanf("%s",&s[index].email);
        printf("Age: ",&s[i].age);
        scanf("%d",&s[index].age);
        printf("Gender: ");
        scanf("%s",&s[index].gender);
}
void main(){
    struct Student s[20];
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    inputStudent(s,n);
    displayStudent(s,n);
    editStudent(s,n);
    displayStudent(s,n);
}
