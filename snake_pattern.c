#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int matrix[n][m];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);

    printf("\nSnake pattern:\n");
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++)
                printf("%d ", matrix[i][j]);
        } else {
            for (int j = m - 1; j >= 0; j--)
                printf("%d ", matrix[i][j]);
        }
    }

    return 0;
}