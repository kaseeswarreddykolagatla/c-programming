#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

union student {
    char name[MAX_NAME_LENGTH];
    float gpa;
};

int main() {
    union student s;
    printf("Enter student name: ");
    fgets(s.name, MAX_NAME_LENGTH, stdin);
    s.name[strcspn(s.name, "\n")] = '\0';
    printf("Enter student GPA: ");
    scanf("%f", &s.gpa);
    printf("Student name: %s\n", s.name);
    printf("Student GPA: %.2f\n", s.gpa);
    printf("\nregistration number:192211216");
    return 0;
}
