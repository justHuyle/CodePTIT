#include <stdio.h>
#define ull unsigned long long
int check(ull n) {
	while (n > 0) {
		if (n%10%2 != 0) return 0;
		n/=10;
	}
	return 1;
}


int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		ull n;
		scanf("%llu", &n);
		if (n%2 == 0 && check(n)) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
