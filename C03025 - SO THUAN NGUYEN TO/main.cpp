#include <stdio.h>
#include <math.h>
int isPrime(int n) {
	if (n < 2) return 0;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n%i == 0) return 0;
		}
	}
	return 1;
}


int csnt(int n) {
	int sum = 0;
	while (n) {
		int x = n%10;
		if (x!=2 && x!=3 && x!=5 && x!=7) return 0;
		sum += x;
		n/=10;
	}
	
	if (isPrime(sum) == 0) return 0;
	return 1;
}


int main() {
	
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		scanf("%d %d", &a, &b);
		int cnt = 0;
		for (int i = a; i <= b; i++) {
			if (csnt(i)) {
				if (isPrime(i)) cnt++;
			}
		}
		printf("%d\n", cnt);
		
		
	}
	
	
	return 0;
}
