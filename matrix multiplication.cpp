#include<stdio.h>
int main() {
    int a[3][3], b[3][3], c[3][3], i, j, k;


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", & a[i][j]);
        }
    }

    printf("Enter the elements of Matrix-B:");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", & b[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the two matrices is:");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", c[i][j]);
        }
    }
}}}
