#include <stdio.h>

int areDiagonalElementsDistinct(int n, int matrix[n][n]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int n, i, j;
    scanf("%d %d", &n, &n);
    int matrix[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (areDiagonalElementsDistinct(n, matrix)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
