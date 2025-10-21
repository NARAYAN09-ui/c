#include <stdio.h>

#define R 5
#define C 5

int safe(int a[R][C], int r, int c, int v[R][C]) {
    return r >= 0 && r < R && c >= 0 && c < C && a[r][c] && !v[r][c];
}

void dfs(int a[R][C], int r, int c, int v[R][C]) {
    int dr[] = {-1,-1,-1,0,0,1,1,1};
    int dc[] = {-1,0,1,-1,1,-1,0,1};
    v[r][c] = 1;
    for (int k = 0; k < 8; k++)
        if (safe(a, r+dr[k], c+dc[k], v))
            dfs(a, r+dr[k], c+dc[k], v);
}

int countIslands(int a[R][C]) {
    int v[R][C] = {0}, count = 0;
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            if (a[i][j] && !v[i][j]) {
                dfs(a, i, j, v);
                count++;
            }
    return count;
}

int main() {
    int a[R][C] = {
        {1,1,0,0,0},
        {0,1,0,0,1},
        {1,0,0,1,1},
        {0,0,0,0,0},
        {1,0,1,0,1}
    };
    printf("Islands: %d\n", countIslands(a));
    return 0;
}