#include <stdio.h>
#include <string.h>

struct student {
   int roll_no;
   char stud_name[50];
   int mark1, mark2, mark3;
   int total_marks;
   float avg_marks;
};

void main() {
   int i, j, n;
   struct student temp, s[100];
   printf("Enter the number of students: ");
   scanf("%d", &n);

   for(i=0; i<n; i++) {
      printf("\nEnter the roll number of student %d: ", i+1);
      scanf("%d", &s[i].roll_no);

      printf("Enter the name of student %d: ", i+1);
      scanf("%s", s[i].stud_name);

      printf("Enter the marks of student %d (mark1 mark2 mark3): ", i+1);
      scanf("%d %d %d", &s[i].mark1, &s[i].mark2, &s[i].mark3);

      s[i].total_marks = s[i].mark1 + s[i].mark2 + s[i].mark3;
      s[i].avg_marks = s[i].total_marks / 3.0;
   }

   for(i=0; i<n-1; i++) {
      for(j=i+1; j<n; j++) {
         if(s[i].total_marks < s[j].total_marks) {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
         }
      }
   }

   printf("\n\nStudent details arranged in descending order of marks:\n");
   printf("Roll No.\tName\t\tMark 1\tMark 2\tMark 3\tTotal\tAvg\n");

   for(i=0; i<n; i++) {
      printf("%d\t\t%s\t\t%d\t%d\t%d\t%d\t%.2f\n", s[i].roll_no, s[i].stud_name, s[i].mark1, s[i].mark2, s[i].mark3, s[i].total_marks, s[i].avg_marks);
   }
   printf("\nregistration number:192211216");
}
