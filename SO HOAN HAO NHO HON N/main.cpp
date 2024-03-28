#include <stdio.h>

int main() {
	long long n;
	scanf("%lld", &n);
	if (n >= 6) printf("6");
	if (n >= 28) printf(" 28");
	if (n >= 496) printf(" 496");
	if (n >= 8128) printf(" 8128");
	if (n >= 33550336) printf(" 33550336");
	
	return 0;
}
