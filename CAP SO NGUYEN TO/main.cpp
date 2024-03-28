#include <stdio.h>
#include <math.h>

int prime[(int)1e6+1];
int size = 1e6+1;

int main() {
	for (int i = 0; i <= size; i++) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for (int i = 2; i <= sqrt(size); i++) {
		if (prime[i]) {
			for (int j = i*i; j <= size; j+=i) {
				prime[j] = 0;
			}
		}
	}
	
	
	
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		for (int i = 2; i <= n/2; i++) {
			if (prime[i] && prime[n-i]) {
				printf("%d %d ", i, n-i);
			}
		}
		printf("\n");
			
	}
	
	return 0;
}
