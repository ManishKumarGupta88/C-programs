#include <stdio.h>
#include <conio.h>

int main() {
    int a[2][2] = {{1, 2}, {4, 5}};
    int b[2][2];
    int i, j;

    // Find transpose of matrix 'a'
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            b[j][i] = a[i][j];
        }
    }

    // Print the transpose matrix 'b'
    printf("Transpose of the matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
