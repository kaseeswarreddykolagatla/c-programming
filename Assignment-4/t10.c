#include <stdio.h>

// Define a union to store a circle's radius or a rectangle's length and width
union shape {
    float radius;
    struct {
        float length;
        float width;
    } rect;
};

int main() {
    union shape s;
    char shape_type;
    float area;

    printf("Enter the type of shape (c for circle, r for rectangle): ");
    scanf("%c", &shape_type);

    if (shape_type == 'c') {
        printf("Enter the radius of the circle: ");
        scanf("%f", &s.radius);
        area = 3.14 * s.radius * s.radius;
        printf("The area of the circle is %.2f\n", area);
    } else if (shape_type == 'r') {
        printf("Enter the length and width of the rectangle: ");
        scanf("%f %f", &s.rect.length, &s.rect.width);
        area = s.rect.length * s.rect.width;
        printf("The area of the rectangle is %.2f\n", area);
    } else {
        printf("Invalid shape type entered.\n");
    }
    printf("\nregistrationnumber:192211216");
    return 0;
}
