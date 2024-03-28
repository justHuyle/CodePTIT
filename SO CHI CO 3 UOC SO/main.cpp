#include <stdio.h>
#include <math.h>
#define ull unsigned long long

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
		int cnt = 0;
		ull a, b;
		scanf("%llu %llu", &a, &b);
		a = sqrt(a), b = sqrt(b);
		for (int i = a; i <= b; i++) {
			if (prime[i]) cnt++;
		}
		printf("%d\n", cnt);
			
	}
	
	return 0;
}
