#include <stdio.h>

int main() {
	int m, n, p, q;
	scanf("%d %d", &m, &n);
	int A[m][n];
	int tmp[n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	scanf("%d %d", &p, &q);
	p--; q--;
	for (int i = 0; i < n; i++) {
		tmp[i] = A[p][i];
	}
	
	for (int i = 0; i < n; i++) {
		A[p][i] = A[q][i];
		A[q][i] = tmp[i];
	}
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
