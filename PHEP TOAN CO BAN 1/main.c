#include <stdio.h>

int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if (b == 0) printf("0");
	else {
		printf("%lld ", a+b);
		printf("%lld ", a-b);
		printf("%lld ", a*b);
		printf("%.2lf ", (1.0)*a/b);
		printf("%lld", a%b);		
	}

	
	
	return 0;
}
