#include <stdio.h>

int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if (a > b) {
		long long tmp = a;
		a = b;
		b = tmp;
	}
	if (b >= 6 && a <= 6) printf("6");
	if (b >= 28 && a <= 28) printf(" 28");
	if (b >= 496 && a <= 496) printf(" 496");
	if (b >= 8128 && a <= 8128) printf(" 8128");
	
	return 0;
}
