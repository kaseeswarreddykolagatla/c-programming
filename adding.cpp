#include <stdio.h>

int main() {
    int rows, columns;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d", &rows, &columns);

    int matrix1[rows][columns], matrix2[rows][columns], result[rows][columns];

    printf("\nEnter the elements of matrix1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter the elements of matrix2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nMatrix1 + Matrix2 =\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
