#include <stdio.h>

int main() {
	int n, m, p;
	scanf("%d %d", &n, &m);
	int A[n], B[m];
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	
	for (int i = 0; i < m; i++) {
		scanf("%d", &B[i]);
	}
	scanf("%d", &p);
	
	
	for (int i = 0; i < p; i++) {
		printf("%d ", A[i]);
	}
	for (int i = 0; i < m; i++) {
		printf("%d ", B[i]);
	}
	
	for (int i = p; i < n; i++) {
		printf("%d ", A[i]);
	}
	return 0;
}
