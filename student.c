#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Define a structure called student
struct Student {
    char name[50];
    int age;
    int admissionno;
    char coursename[50];
};

// Function to input student details
void input_details(struct Student *s) {
    printf("Enter student's name: ");
    scanf("%s", s->name);

    printf("Enter student's age: ");
    scanf("%d", &(s->age));

    printf("Enter admission-no: ");
    scanf("%d", &(s->admissionno));

    printf("Enter the course name: ");
    scanf("%s", s->coursename);
}

// Function to display student details
void display_details(struct Student s) {
    printf("Student's details:\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Admission No: %d\n", s.admissionno);
    printf("Course Name: %s\n", s.coursename);
}

int main() {
    // Create a student object
    struct Student student;

    // Input details of the student
    input_details(&student);

    // Display details of the student
    display_details(student);

    return 0;
}
