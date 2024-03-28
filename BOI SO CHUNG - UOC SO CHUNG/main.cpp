#include <stdio.h>
#define ull unsigned long long

ull gcd(ull a, ull b) {
	while (a!=b) {
		if (a > b) a-=b;
		else b-=a;
	}
	return a;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		ull a, b;
		scanf("%llu %llu", &a, &b);
		printf("%llu %llu\n", a*b/gcd(a, b), gcd(a, b));	
	}
	
	
	return 0;
}
