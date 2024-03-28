#include <stdio.h>
#include <math.h>
int prime[(int)1e5];
int size = 1e5;

int divisible5(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n%10;
		n/=10;
	}
	return sum%5 == 0;
}


int main() {
	for (int i = 0; i <= size; i++) {
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for (int i = 2; i <= sqrt(size); i++) {
		if (prime[i]) {
			for (int j = i*i; j <= size; j+=i) {
				prime[j] = 0;
			}
		}
	}
	
	
	int n, cnt = 0;
	scanf("%d", &n);
	for (int i = 5; i <= n; i++) {
		if (prime[i] && divisible5(i)) {
			cnt++;
			printf("%d ", i);
		}
	}
	printf("\n%d", cnt);
	return 0;
}
