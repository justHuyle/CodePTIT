#include <stdio.h>
#include <math.h>


int main() {
	int prime[(int) 1e6+1];
	int size = 1e6+1;

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
	
	
	int n;
	scanf("%lld", &n);
	for (int i = 2; i < n; i++) {
		if (prime[i]) printf("%d\n", i);
	}
	
	
	return 0;
}
