#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

// Define a structure for student records
struct Student {
    char name[50];
    int id;
    char branch[50];
};

int main() {
    int n;
    struct Student students[MAX_STUDENTS];

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input student records
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Branch: ");
        scanf("%s", students[i].branch);
    }

    // Display records of students belonging only to the Civil department
    printf("\nStudents belonging to the Civil department:\n");
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].branch, "Civil") == 0) {
            printf("Name: %s, ID: %d, Branch: %s\n", students[i].name, students[i].id, students[i].branch);
        }
    }

    return 0;
}
