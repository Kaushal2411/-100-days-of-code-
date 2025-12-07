
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

int main(void) {
    // Dynamically allocate memory for one Student
    Student *s = (Student *)malloc(sizeof(Student));
    if (s == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }


    printf("Enter details in format:\n");
    printf("Student allocated dynamically with details: <Name> <Roll> <Marks>\n");

    if (scanf("Student allocated dynamically with details: %49s %d %d",
              s->name, &s->roll, &s->marks) != 3) {
        fprintf(stderr, "Invalid input format.\n");
        free(s);
        return 1;
    }

    // Print the details
    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);

    // Free the allocated memory
    free(s);
    return 0;
}
