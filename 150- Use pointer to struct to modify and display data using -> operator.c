
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

int main(void) {
    // Allocate memory for a Student and use a pointer
    Student *p = (Student *)malloc(sizeof(Student));
    if (p == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }


    printf("Enter details in format:\n");
    printf("Student pointer modifying values: <Name> <Roll> <Marks>\n");

    if (scanf("Student pointer modifying values: %49s %d %d",
              p->name, &p->roll, &p->marks) != 3) {
        fprintf(stderr, "Invalid input format.\n");
        free(p);
        return 1;
    }

    // Display modified data using -> operator
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           p->name, p->roll, p->marks);

    free(p);
    return 0;
}
