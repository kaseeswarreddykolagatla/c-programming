#include <stdio.h>
int main() {
int n, i, sum = 0;
printf("Enter the size of the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements of the array: ");
for(i=0; i<n; i++) {
scanf("%d", &arr[i]);
sum += arr[i];
}
printf("Sum of elements in the array is: %d\n", sum);
}
