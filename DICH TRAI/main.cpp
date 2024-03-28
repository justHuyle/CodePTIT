#include <stdio.h>

int main() {
	int n, p;
	scanf("%d", &n);
	int A[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	scanf("%d", &p);
	for (int i = p; i < n; i++) {
		printf("%d ", A[i]);
	}
	
	for (int i = 0; i < p; i++) {
		printf("%d ", A[i]);
	}
	
	return 0;
}
