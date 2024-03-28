#include <stdio.h>
#include <math.h>
int prime(int n) {
	if (n < 2) return 0;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n%i == 0) return 0;
		}
	}
	return 1;
}

int reversible(int n) {
	int re_n = 0, tmp = n;
	while (n > 0) {
		re_n = re_n*10 + n%10;
		n/=10;
	}
	return re_n == tmp;
}

void solve(long long a, long long b) {
	int cnt = 0, cnt1 = 0, cnt2 = 0;
	for (long long i = a; i <= b; i++) {
		if (prime(i) && reversible(i)) cnt1++;
	}
	
	
	for (long long i = a; i <= b; i++) {
		if (prime(i) && reversible(i)) {
			cnt++;
			cnt2++;
			if (cnt == 10) {
				cnt = 0;
				printf("%lld\n", i);
			}
			else if (cnt2 == cnt1) printf("%lld", i);
			else {
				printf("%lld ", i);
			}
		}
	}
	printf("\n");
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long a, b;
		scanf("%lld %lld", &a, &b);
		solve(a, b);	
	}

	return 0;
}
