#include <stdio.h>
#include <math.h>


int prime(int n) {
	if (n < 2) return 0;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n%i == 0) return 0;
		}
	}
	return 1;
}

int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	int A[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
		if (prime(A[i])) cnt++;
	}
	printf("%d ", cnt);
	for (int i = 0; i < n; i++) {
		if (prime(A[i])) {
			printf("%d ", A[i]);
		}
	}
	
	
	
	return 0;
}
