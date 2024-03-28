#include <stdio.h>

int main() {
	int t; long long a;
	scanf("%d", &t);
	while (t--) {
		scanf("%lld", &a);
		printf("%.15lf\n", (double) 1/a);
	}
	
	
	
	return 0;
}
