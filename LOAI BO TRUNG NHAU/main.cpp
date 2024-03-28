#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int A[n];
	int size = 1e5;
	int ok[size];
	for (int i = 0; i < size; i++) {
		ok[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	
	for (int i = 0; i < n; i++) {
		if (ok[A[i]] == 0) {
			printf("%d ", A[i]);
			ok[A[i]] = 1;
		}
	}
	
	
	return 0;
}
