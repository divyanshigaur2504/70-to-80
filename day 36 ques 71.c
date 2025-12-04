#include <stdio.h>

void readMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols); 
    int matrix[100][100]; 
    readMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    return 0;
}
