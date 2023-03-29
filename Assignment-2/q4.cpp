//C Program To Find Maximum Difference Between Two Elements in an Array
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_diff = arr[1] - arr[0];
    int min_element = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] - min_element > max_diff) {
            max_diff = arr[i] - min_element;
        }
        if (arr[i] < min_element) {
            min_element = arr[i];
        }
    }

    printf("The maximum difference between two elements is %d", max_diff);
    printf("\nRegistration number:192211216");
    return 0;
}n