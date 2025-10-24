#include <stdio.h>

void boundaryTraversal(int mat[][100], int rows, int cols) {
    if (rows == 1) {
        for (int i = 0; i < cols; i++)
            printf("%d ", mat[0][i]);
    } 
    else if (cols == 1) {
        for (int i = 0; i < rows; i++)
            printf("%d ", mat[i][0]);
    } 
    else {
        for (int i = 0; i < cols; i++)
            printf("%d ", mat[0][i]);

        for (int i = 1; i < rows; i++)
            printf("%d ", mat[i][cols - 1]);

        for (int i = cols - 2; i >= 0; i--)
            printf("%d ", mat[rows - 1][i]);

        for (int i = rows - 2; i > 0; i--)
            printf("%d ", mat[i][0]);
    }
}

int main() {
    int mat[100][100];
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    printf("Boundary traversal: ");
    boundaryTraversal(mat, rows, cols);

    return 0;
}
