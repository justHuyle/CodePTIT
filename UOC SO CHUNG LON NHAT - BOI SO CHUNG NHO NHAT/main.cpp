#include <stdio.h>
#include <math.h>

int gcd(int a, int b) {
	while (a != b) {
		if (a > b) a-=b;
		else b-=a;
	}
	return a;
}


int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld\n", gcd(a, b));
	printf("%lld", a*b/gcd(a, b));
	
	
	return 0;
}
