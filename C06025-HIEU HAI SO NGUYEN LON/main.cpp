#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void reverse(int a[], int n) {
    int l = 0, r = n - 1;
    while (l < r) {
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        l++; r--;
    }
}

void sub(char a[], char b[]) {
    int n1 = strlen(a), n2 = strlen(b), n = 0;
    int x[n1], y[n1], z[n1];
    for (int i = 0; i < n1; i++) x[i] = a[i] - '0'; // convert char to int
    for (int i = 0; i < n2; i++) y[i] = b[i] - '0';
    reverse(x, n1); reverse(y, n2);
    for (int i = n2; i < n1; i++) {
        y[i] = 0;
    }
    int nho = 0;
    for (int i = 0; i < n1; i++) {
        z[i] = x[i] - y[i] - nho;
        if (z[i] < 0) {
            z[i] += 10;
            nho = 1;
        } else {
            nho = 0;
        }
    }

    int ok = 0;
    for (int i = n1-1; i >= 0; i--) {
        if (z[i] && ok == 0) {
            ok = 1;
        }
        if (ok)printf("%d", z[i]);
    }
    if (!ok) printf("0");

}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char a[1005], b[1005];
        scanf("%s%s", a, b);
        if (strlen(a) > strlen(b) || (strlen(a) == strlen(b) && strcmp(a, b) > 0)) {
            sub(a, b);
        } else {
            sub(b, a);
        }
        printf("\n");
    }


    return 0;
}