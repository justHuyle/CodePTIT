#include <stdio.h>
#define ull unsigned long long
#include <math.h>

int prime(ull n) {
	if (n < 2) return 0;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n%i == 0) {
				return 0;
			}
		}
	}
	return 1;
}


void solve(ull n) {
	ull max = -1e2;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n%i == 0) {
			if (prime(i)) {
				if (max < i) max = i;	
			} 
			if (prime(n/i)) {
				if (max < n/i) max = n/i;
			}
		}
	}
	printf("%llu\n", max);
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
