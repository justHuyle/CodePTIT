#include <stdio.h>

int main() {
	int n, mul = 1;
	scanf("%d", &n);
	while (n > 0) {
		mul*=n%10;
		n/=10;
	}
	printf("%d", mul);
	
	
	return 0;
}
