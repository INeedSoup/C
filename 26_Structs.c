#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;


void printStudent(Student student);

int main()
{
    // struct = a custom container that holds multiple pieces of related information, Similar to objects in other languages

    Student student1 = {"Dhurpinder", 30, 2.567, true};
    Student student2 = {"Pahadi", 23, 2.352, false};
    Student student3;
    // now when we dont define the members for the struct value, that gives undefined, basically garbage values

    Student student4 = {0}; // we can do this to set all values 0

    strcpy(student4.name, "Sandy");
    strncpy(student4.name, "Dhiren", 4); // here we set first four characters to be of this string, and remaing characters would be of other declarations if were done any earlier
    // so Dhir of this declaration and y of Sandy as fifth character as it was done earlier

    student4.age = 4.0; 
    student4.isFullTime = true;

    // printf("%s\n", student1.name);
    // printf("%d\n", student1.age);
    // printf("%.2f\n", student1.gpa);
    // printf("%s\n\n", (student1.isFullTime) ? "Yes" : "No");

    // printf("%s\n", student2.name);
    // printf("%d\n", student2.age);
    // printf("%.2f\n", student2.gpa);
    // printf("%s\n\n", (student2.isFullTime) ? "Yes" : "No");

    // printf("%s\n", student3.name);
    // printf("%d\n", student3.age);
    // printf("%.2f\n", student3.gpa);
    // printf("%s\n\n", (student3.isFullTime) ? "Yes" : "No");


    // printf("%s\n", student4.name);
    // printf("%d\n", student4.age);
    // printf("%.2f\n", student4.gpa);
    // printf("%s\n\n", (student4.isFullTime) ? "Yes" : "No");

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);

    return 0;
}


void printStudent(Student student)
{
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-time: %s\n\n", (student.isFullTime) ? "Yes" : "No");
}