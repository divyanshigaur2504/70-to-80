#include <stdio.h>

int sumMatrix(int matrix[][100], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

void readMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols); 
    int matrix[100][100]
    readMatrix(matrix, rows, cols);
    printf("%d\n", sumMatrix(matrix, rows, cols));
    return 0;
}
