#include <stdio.h>
int gcd(int a, int b) {
	while (a!=b) {
		if (a > b) {
			a-=b;
		} else {
			b-=a;
		}
	}
	return a;
}


unsigned long long GCD(unsigned long long a, unsigned long long b) {
//    if (a == 0) return b;
//    if (b == 0) return a;
//
//    // Remove common factors of 2
//    unsigned long long shift = __builtin_ctz(a | b);
//    a >>= __builtin_ctz(a);
//
//    while (b != 0) {
//        b >>= __builtin_ctz(b);
//        if (a > b) {
//            unsigned long long temp = a;
//            a = b;
//            b = temp;
//        }
//        b -= a;
//    }
//
//    return a << shift;
    
    
    
    while (a!=b) {
		if (a > b) {
			a-=b;
		} else {
			b-=a;
		}
	}
	return a;

}

unsigned long long lcm(int a, int b) {
	return a*b / GCD(a, b);
}

int main() {
	int t;
	scanf("%d", &t);	
	while (t--) {
		int n;
		scanf("%d", &n);
		unsigned long long LCM = 1;
		for (int i = 2; i <= n+1; i++) {
			LCM = lcm(i, LCM);
		}
		printf("%llu\n", LCM);
	}
	
	return 0;
}
