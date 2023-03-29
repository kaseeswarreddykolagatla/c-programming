#include <stdio.h>
#include <stdlib.h>

int main() {
   int arr[100], rev_arr[100];
   int n, i, j, flag = 1;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter the elements of the array: ");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
      rev_arr[n - i - 1] = arr[i];
   }

   for (i = 0; i < n; i++) {
      if (arr[i] != rev_arr[i]) {
         flag = 0;
         break;
      }
   }

   if (flag == 1)
      printf("The array is a palindrome.");
   else
      printf("The array is not a palindrome.");

   return 0;
}