#include <stdio.h>

int areDiagonalElementsDistinct(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return 0; 
            }
        }
    }
    return 1; 
}

void readMatrix(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n); 
    int matrix[100][100]; 
    readMatrix(matrix, n);
    if (areDiagonalElementsDistinct(matrix, n)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
