#include <stdio.h>
#define ull unsigned long long

void solve(ull n) {
	int odd = 0, even = 0;
	while (n > 0) {
		if (n%10%2) odd++;
		else even++;
		n/=10;
	}
	if (even > odd) printf("YES\n");
	else printf("NO\n");
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
