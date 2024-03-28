#include <stdio.h>
#include <math.h>

int prime(long long int n) {
	if (n < 2) return 0;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n%i == 0) return 0;
		}
	}
	return 1;
}


int main() {
	int n;
	long long int x = 2;
	scanf("%d", &n);
	while (n > 0) {
		if (prime(x)) {
			printf("%lld\n", x);
			n--;
		}
		x++;
	}
	
	
	
	return 0;
}
