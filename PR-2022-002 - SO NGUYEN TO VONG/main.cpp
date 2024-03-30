#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) return 0;
    }
    return 1;
}

int circularPrime(int n) {
    int temp = n;
    int count = 0;
    while(temp > 0) {
        temp /= 10;
        count++;
    }
    temp = n;
    for (int i = 0; i < count; i++) {
        if (!isPrime(temp)) return 0;
        int last = temp%10;
        temp /= 10;
        temp = last*10 + temp;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        if (circularPrime(n)) printf("1\n");
        else printf("0\n");
    }






    return 0;
}