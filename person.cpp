#include <stdio.h>
struct person {
    char name[50];
    int age;
    float height;
};
int main() {
    struct person p;
    p.name= kasi;
    p.age = 30;
    p.height = 6.0;
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %f\n", p.height);

    return 0;
}
