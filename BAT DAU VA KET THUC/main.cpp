#include <stdio.h>
int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		int cuoi = n%10, dau = 0;
		while (n > 0) {
			dau = n%10;
			n/=10;
		}
		if (dau == cuoi) printf("YES\n");
		else printf("NO\n");
	}

	
	
	return 0;
}
