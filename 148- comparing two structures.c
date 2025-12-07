
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

// Function to compare two Student structs
bool are_identical(Student s1, Student s2) {
    return (strcmp(s1.name, s2.name) == 0) &&
           (s1.roll == s2.roll) &&
           (s1.marks == s2.marks);
}

int main() {
    Student s1, s2;

    // Input for first student
    printf("Enter Student1 details (Name Roll Marks): ");
    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    // Input for second student
    printf("Enter Student2 details (Name Roll Marks): ");
    scanf("%s %d %d", s2.name, &s2.roll, &s2.marks);

    // Check if identical
    if (are_identical(s1, s2)) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }

    return 0;
}
