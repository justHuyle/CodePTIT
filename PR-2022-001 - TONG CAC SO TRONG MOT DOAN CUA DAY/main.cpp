#include <stdio.h>

int main() {
    int u0, d, n;
    scanf("%d%d%d", &u0, &d, &n);
    printf("%d", n*(2*u0+(n-1)*d)/2);
    return 0;
}