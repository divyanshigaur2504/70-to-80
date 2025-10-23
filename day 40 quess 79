#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int diagonal[rows];
    int min = (rows < cols) ? rows : cols;
    for (int i = 0; i < min; i++) {
        diagonal[i] = matrix[i][i];
    }
    int distinct = 1;
    for (int i = 0; i < min; i++) {
        for (int j = i + 1; j < min; j++) {
            if (diagonal[i] == diagonal[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }
    if (distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
