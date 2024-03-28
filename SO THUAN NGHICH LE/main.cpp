#include <stdio.h>
#define ull unsigned long long
int reversible(ull n) {
	ull tmp = n, re_n = 0;
	while (n > 0) {
		re_n = re_n*10+n%10;
		n/=10;
	}
	return tmp == re_n;
	
}

int sumOfDigits(ull n) {
	int sum = 0;
	while (n > 0) {
		sum += n%10;
		n/=10;
	}
	return sum;
}

void solve(ull n) {
	if (reversible(n) && n%2 && sumOfDigits(n)%2) {
		printf("YES\n");
	} else printf("NO\n");
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		ull n;
		scanf("%llu", &n);
		solve(n);
	}
	
	return 0;
}
