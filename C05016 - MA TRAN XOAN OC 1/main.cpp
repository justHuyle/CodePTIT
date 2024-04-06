#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n], cnt = 1;
    int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1;
    while (cnt <= n*n) {
        for (int i = c1; i <= c2; i++) {
            a[h1][i] = cnt++;
        }
        for (int i = h1+1; i <= h2; i++) {
            a[i][c2] = cnt++;
        }
        for (int i = c2-1; i >= c1; i--) {
            a[h2][i] = cnt++;
        }
        for (int i = h2-1; i > h1; i--) {
            a[i][c1] = cnt++;
        }
        h1++; h2--; c1++; c2--;
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }



    return 0;
}