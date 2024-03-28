#include <stdio.h>
#include <math.h>


int main() {
	int n, dau = 0;
	scanf("%d", &n);
	int cuoi = n%10;
	while (n > 0) {
		dau = n%10;
		n/=10;
	}
	printf("%d %d", dau, cuoi);
	return 0;
}
