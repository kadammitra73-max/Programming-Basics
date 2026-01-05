#include <stdio.h>
#include <string.h>

#define MAX 100  // Maximum number of students

// Define a structure for Student
struct Student {
    int id;
    char name[50];
    int marks;
};

struct Student students[MAX]; 
int n=0;
// Function to add a student
void addStudent() {
    if(n >= MAX) {
        printf("Cannot add more students.\n");
        return;
    }
    printf("Enter student ID: ");
    scanf("%d", &students[n].id);
    printf("Enter name: ");
    scanf("%s", students[n].name); 
    printf("Enter marks: ");
    scanf("%d", &students[n].marks);
    n++;
    printf("Student added successfully!\n\n");
}

// Function to display all students
void displayStudents() {
    if(n == 0) {
        printf("No students to display.\n\n");
        return;
    }
    printf("\nList of Students:\n");
    for(int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Marks: %d\n", students[i].id, students[i].name, students[i].marks);
    }
    printf("\n");
}

// Function to search a student by ID
void searchStudent() {
    if(n == 0) {
        printf("No students to search.\n\n");
        return;
    }
    int id, found = 0;
    printf("Enter student ID to search: ");
    scanf("%d", &id);
    for(int i = 0; i < n; i++) {
        if(students[i].id == id) {
            printf("ID: %d, Name: %s, Marks: %d\n\n", students[i].id, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Student not found.\n\n");
    }
}

// Function to update marks of a student by ID
void updateMarks() {
    if(n == 0) {
        printf("No students to update.\n\n");
        return;
    }
    int id, found = 0;
    printf("Enter student ID to update marks: ");
    scanf("%d", &id);
    for(int i = 0; i < n; i++) {
        if(students[i].id == id) {
            printf("Enter new marks: ");
            scanf("%d", &students[i].marks);
            printf("Marks updated successfully!\n\n");
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Student not found.\n\n");
    }
}

// Function to delete a student by ID
void deleteStudent() {
    if(n == 0) {
        printf("No students to delete.\n\n");
        return;
    }
    int id, found = 0;
    printf("Enter student ID to delete: ");
    scanf("%d", &id);
    for(int i = 0; i < n; i++) {
        if(students[i].id == id) {
            for(int j = i; j < n - 1; j++) {
                students[j] = students[j + 1]; // Shift left
            }
            n--;
            printf("Student deleted successfully!\n\n");
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Student not found.\n\n");
    }
}

// Main function with menu
int main() {
    int choice;
    do {
        printf("------ Student Management System ------\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateMarks(); break;
            case 5: deleteStudent(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Try again.\n\n");
        }
    } while(choice != 6);

    return 0;
}
