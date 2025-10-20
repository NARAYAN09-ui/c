#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) { return a > b ? a : b; }

int maxHist(int arr[], int n) {
    int stack[n], top = -1, max_area = 0, i = 0;
    while (i < n) {
        if (top == -1 || arr[stack[top]] <= arr[i])
            stack[++top] = i++;
        else {
            int h = arr[stack[top--]];
            int w = (top == -1) ? i : i - stack[top] - 1;
            max_area = max(max_area, h * w);
        }
    }
    while (top != -1) {
        int h = arr[stack[top--]];
        int w = (top == -1) ? i : i - stack[top] - 1;
        max_area = max(max_area, h * w);
    }
    return max_area;
}

int maxRectangle(int R, int C, int m[R][C]) {
    int res = maxHist(m[0], C);
    for (int i = 1; i < R; i++) {
        for (int j = 0; j < C; j++)
            if (m[i][j]) m[i][j] += m[i - 1][j];
        res = max(res, maxHist(m[i], C));
    }
    return res;
}

int main() {
    int m[4][4] = {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 0, 0}
    };
    printf("Maximum size rectangle of 1s is: %d\n", maxRectangle(4, 4, m));
    return 0;
}