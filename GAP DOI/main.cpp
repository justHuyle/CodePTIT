#include <stdio.h>

int main() {
	long long a, t;
	scanf("%lld", &t);
	while (t--) {
		scanf("%lld", &a);
		printf("%lld\n", a+a);
	}
	
	
	return 0;
}
