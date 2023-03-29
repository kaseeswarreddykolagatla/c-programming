#include <stdio.h>
int main() {
   int n;
   printf("Enter the size of the array: ");
   scanf("%d", &n);

   int arr[n];
   printf("Enter the elements of the array:\n ");
   for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   int max = arr[0];
   for (int i = 1; i < n; i++) {
      if (arr[i] > max) {
         max = arr[i];
      }
   }
    printf("The largest number in the array is %d\n", max);
    printf("\nregistration number:192211216");
   return 0;
}