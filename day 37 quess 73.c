#include <stdio.h>

void sumRows(int matrix[][100], int rows, int cols, int rowSums[]) {
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for (int j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
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

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[100][100]; 
    int rowSums[100]; 
    readMatrix(matrix, rows, cols);
    sumRows(matrix, rows, cols, rowSums);
    printArray(rowSums, rows);
    return 0;
}
