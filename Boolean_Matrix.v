#include <stdio.h>

int main() {
    int mat[4][4] = {
        {1, 0, 0, 1},
        {0, 0, 1, 0},
        {0, 0, 0, 0},
        {0, 1, 0, 0}
    };
    int row[4] = {0}, col[4] = {0};

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (mat[i][j] == 1)
                row[i] = col[j] = 1;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (row[i] || col[j])
                mat[i][j] = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}