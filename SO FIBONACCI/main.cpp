#include <stdio.h>

void solve(int n) {
	long long a = 1, b = 1, c = 1;
	while (n > 0) {
		c = a+b;
		a = b;
		b = c;
		n--;
	}
	printf("%lld\n", c);
}

int main() {
	
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		solve(n-2);
	}
	
	return 0;
}
