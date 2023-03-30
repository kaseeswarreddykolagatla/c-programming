#include <stdio.h>

void copyArray(int* source, int* destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i);
    }
}

int main() {
    int sourceArray[] = {1, 2, 3, 4, 5};
    int destinationArray[5];

    int size = sizeof(sourceArray) / sizeof(sourceArray[0]);

    copyArray(sourceArray, destinationArray, size);

    printf("Elements of source array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(sourceArray + i));
    }

    printf("\nElements of destination array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(destinationArray + i));
    }

    printf("registration number:192211188");
    return 0;
}