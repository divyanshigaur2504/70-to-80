#include <stdio.h>

void addMatrices(int matrix1[][100], int matrix2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

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
        printf("\n");
    }
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols); 
    int matrix1[100][100]; 
    int matrix2[100][100]; 
    int result[100][100]; 
    printf("Enter elements of first matrix:\n");
    readMatrix(matrix1, rows, cols);
    printf("Enter elements of second matrix:\n");
    readMatrix(matrix2, rows, cols);
    addMatrices(matrix1, matrix2, result, rows, cols);
    printMatrix(result, rows, cols);
    return 0;
}
