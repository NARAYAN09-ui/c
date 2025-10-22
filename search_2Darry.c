#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int a[][100], int r, int c, int x) {
    int l = 0, h = r * c - 1;
    while (l <= h) {
        int m = (l + h) / 2;
        int val = a[m / c][m % c];
        if (val == x) return true;
        else if (val < x) l = m + 1;
        else h = m - 1;
    }
    return false;
}

int main() {
    int r, c, x, a[100][100];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    scanf("%d", &x);
    printf(searchMatrix(a, r, c, x) ? "Found\n" : "Not Found\n");
}