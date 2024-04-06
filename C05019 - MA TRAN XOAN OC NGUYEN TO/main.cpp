#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int size = 10000, prime[size];
    for (int i = 2, cnt = 0; cnt < size; i++) {
        if (isPrime(i)) {
            prime[cnt++] = i;
        }
    }

    int t;
    scanf("%d", &t);
    for (int x = 1; x <= t; x++) {
        int n;
        scanf("%d", &n);
        int a[n][n], cnt = 0;
        int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1;
        while (cnt < n*n) {
            for (int i = c1; i <= c2; i++) {
                a[h1][i] = prime[cnt];
                cnt++;
            }
            for (int i = h1+1; i <= h2; i++) {
                a[i][c2] = prime[cnt];
                cnt++;
            }
            for (int i = c2-1; i >= c1; i--) {
                a[h2][i] = prime[cnt];
                cnt++;
            }
            for (int i = h2-1; i > h1; i--) {
                a[i][c1] = prime[cnt];
                cnt++;
            }
            h1++; h2--; c1++; c2--;
        }
        printf("Test %d:\n", x);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}