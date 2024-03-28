#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int A[n][n], tmp[n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	
	
	for (int i = 0; i < n; i++) {
		tmp[i] = A[i][i];
	}
	
	for (int i = 0; i < n; i++) {
		A[i][i] = A[i][n-1-i];
		A[i][n-1-i] = tmp[i];
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
