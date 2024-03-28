#include <stdio.h>

void solve(long long n) {
	int sum = 0;
	while (n > 0) {
		sum += n%10;
		n/=10;
	}
	if (sum%10 == 0) printf("YES\n");
	else printf("NO\n");
}


int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long n;
		scanf("%lld", &n);
		solve(n);
	}
	
	
	return 0;
}
