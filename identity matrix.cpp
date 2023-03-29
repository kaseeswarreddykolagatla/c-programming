#include <stdio.h>

int main() {
   int n, i, j;
   printf("Enter the size of the matrix: ");
   scanf("%d", &n);
   
   int matrix[n][n];
   printf("Enter the elements of the matrix: \n");

   for(i=0; i<n; i++) {
      for(j=0; j<n; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }
   for(i=0; i<n; i++) {
      for(j=0; j<n; j++) {
         if(i==j && matrix[i][j]!=1) {
            printf("Not an identity matrix\n");
            return 0;
         }
         else if(i!=j && matrix[i][j]!=0) {
            printf("Not an identity matrix\n");
            return 0;
         }
      }
   }
   
   printf("Identity matrix\n");
   printf("\nregistration number:192211399");
}
