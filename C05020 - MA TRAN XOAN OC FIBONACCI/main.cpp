#include <stdio.h>

int main() {
    //fibonacci array
    int fib[1005];
    fib[0] = 0, fib[1] = 1;
    for (int i = 2; i < 1005; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    int n;
    scanf("%d", &n);
    int a[n][n], cnt = 0; //bien dem
    int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1; //h1 la hang dau, h2 la hang cuoi, c1 la cot dau, c2 la cot cuoi
    while (cnt < n*n) {
        for (int i = c1; i <= c2; i++) {
            a[h1][i] = fib[cnt];
            cnt++;
        }
        for (int i = h1+1; i <= h2; i++) {
            a[i][c2] = fib[cnt];
            cnt++;
        }
        for (int i = c2-1; i >= c1; i--) {
            a[h2][i] = fib[cnt];
            cnt++;
        }
        for (int i = h2-1; i > h1; i--) {
            a[i][c1] = fib[cnt];
            cnt++;
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