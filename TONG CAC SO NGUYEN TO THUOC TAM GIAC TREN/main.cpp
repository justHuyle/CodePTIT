#include <stdio.h>
#include <math.h>
int prime(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n%i == 0) return 0;
	}
	return 1;
}



int main() {
	int n;
	scanf("%d", &n);
	int A[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (prime(A[i][j])) sum += A[i][j]; 
		}
	}
	printf("%d", sum);
	
	
	return 0;
}
