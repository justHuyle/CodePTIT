#include <stdio.h>
#include <math.h>
int prime[(int) 2e6];
int size = 2e6;


int sumOfDivisors(int n) {
	int sum = 0;
	
	for (int i = 2; i < sqrt(n); i++) {
		if (n%i == 0) {
			if (i == n/i) sum += i;
			else {
				sum += i;
				sum += n/i;
			}
		}
	}
	
	return sum;
}


int main() {
	for (int i = 0; i <= size; i++) {
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for (int i = 2; i <= sqrt(size); i++) {
		if(prime[i]) {
			for (int j = i*i; j <= size; j+=i) {
				prime[j] = 0;
			}
		}
	}
	
	
	
	int t;
	scanf("%d", &t);
	int sum = 0;
	while (t--) {
		int n;
		scanf("%d", &n);
		if (prime[n]) sum += n;
		else sum += sumOfDivisors(n);
	}
	printf("%d", sum);
	
	
	return 0;
}
