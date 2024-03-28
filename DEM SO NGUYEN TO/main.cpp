#include <stdio.h>
#include <math.h>
int prime (int n) {
	if (n < 2) return 0;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n%i == 0) {
				return 0;
			}
		}
	}
	return 1;
	
}

int primeDigits(int n) {
	while (n > 0) {
		if (prime(n%10)==0) return 0;
		n/=10;
	}
	return 1;
}


int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b, cnt = 0;
		scanf("%d %d", &a, &b);
		for (int i = a; i <= b; i++) {
			if (primeDigits(i) && prime(i)) cnt++;
		}
		printf("%d\n", cnt);

		
	}

	
	return 0;
}
