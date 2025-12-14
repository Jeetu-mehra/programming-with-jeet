#include <stdio.h>

// Define a structure to store student details
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n; // Number of students

    // Ask user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array of structures to store student details
    struct Student students[n];

    // Input details of each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // To accept a string with spaces

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display details of all students
    printf("\nDetails of Students:\n");
    printf("%-10s %-30s %-10s\n", "Roll No", "Name", "Marks");
    printf("--------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-30s %-10.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }

    return 0;
}