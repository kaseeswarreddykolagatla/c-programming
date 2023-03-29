#include <stdio.h>

int main() {
    int arr[50], n, i, largest, second_largest, smallest, second_smallest;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second_largest = arr[0];
    smallest = arr[0];
    second_smallest = arr[0];

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }

        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);
    printf("The second largest element in the array is: %d\n", second_largest);
    printf("The smallest element in the array is: %d\n", smallest);
    printf("The second smallest element in the array is: %d\n", second_smallest);

    return 0;
}