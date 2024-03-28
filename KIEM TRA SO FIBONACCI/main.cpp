#include <stdio.h>
#include <math.h>
#define ull unsigned long long
int solve(int n) {
	int a = 1, b = 1, c = 1;
	while (n > 0) {
		c = a+b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, ok = 1;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) {
			if (solve(i-2) == n) {
				ok = 0;
				break;
			}
		}
		if (ok) {
			printf("NO\n");
		} else printf("YES\n");
	}

	
	
	return 0;
}
