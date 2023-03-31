#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct student {
    char name[50];
    int roll_number;
    struct tm birthday;
    struct tm admission_date;
};

double calculate_age(struct tm dob, struct tm admission_date) {
    time_t birth_time = mktime(&dob);
    time_t admission_time = mktime(&admission_date);
    double seconds = difftime(admission_time, birth_time);
    double years = seconds / (60.0 * 60.0 * 24.0 * 365.25);
    return years;
}

int main() {
    struct student s;
    
    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", s.name);
    printf("Roll number: ");
    scanf("%d", &s.roll_number);
    printf("Birthday (YYYY-MM-DD): ");
    scanf("%d-%d-%d", &s.birthday.tm_year, &s.birthday.tm_mon, &s.birthday.tm_mday);
    printf("Admission date (YYYY-MM-DD): ");
    scanf("%d-%d-%d", &s.admission_date.tm_year, &s.admission_date.tm_mon, &s.admission_date.tm_mday);
    
    s.birthday.tm_year -= 1900;
    s.birthday.tm_mon -= 1;
    s.birthday.tm_hour = 0;
    s.birthday.tm_min = 0;
    s.birthday.tm_sec = 0;
    
    s.admission_date.tm_year -= 1900;
    s.admission_date.tm_mon -= 1;
    s.admission_date.tm_hour = 0;
    s.admission_date.tm_min = 0;
    s.admission_date.tm_sec = 0;
    
    double age = calculate_age(s.birthday, s.admission_date);
    
    printf("\nStudent details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll_number);
    printf("Birthday: %d-%d-%d\n", s.birthday.tm_year+1900, s.birthday.tm_mon+1, s.birthday.tm_mday);
    printf("Admission date: %d-%d-%d\n", s.admission_date.tm_year+1900, s.admission_date.tm_mon+1, s.admission_date.tm_mday);
    printf("Approximate age at the time of admission: %.2f years\n", age);
    
    return 0;
}

