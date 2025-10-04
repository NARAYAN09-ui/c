#include <stdio.h>  
int main() {
    int n=3;
    int magic[3][3] = {0};
    int i = 0, j = n / 2; 
    for (int num = 1; num <= n * n; ) {
        magic[i][j] = num++; 
        int newi = (i - 1 + n) % n; 
        int newj = (j + 1) % n; 
        if (magic[newi][newj]) { 
            i = (i + 1) % n; 
        } else {
            i = newi;
            j = newj;
        }
    }
    for (i = 0; i < n; i++) {   
        for (j = 0; j < n; j++) {
            printf("%2d ", magic[i][j]);
        }
        printf("\n");
    }
    return 0;
}