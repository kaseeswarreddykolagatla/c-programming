#include <stdio.h>

struct Rectangle {
    float width;
    float height;
};

int main() {
    struct Rectangle rect;
    float area;

 
    printf("Enter the width of the rectangle: ");
    scanf("%f", &rect.width);

    printf("Enter the height of the rectangle: ");
    scanf("%f", &rect.height);


    area = rect.width * rect.height;

    printf("The area of the rectangle is: %.2f\n", area);
}