#include <stdio.h>

int A[100][100], B[100][100], C[100][100], D[100][100], E[100][100];

void tichMaTran(int A[][100], int B[][100], int m, int n, int p, int q) {
	int i, j, k;
	for (i = 0; i < m; i++) {
		for (j = 0; j < p; j++) {
			int tt = 0;
			for (k = 0; k < n; k++) {
				tt = tt + (A[i][k] * B[k][j]);
			}
			E[i][j] = tt;
		}
	}
	
	// E: hang = m, cot = p;
	
	// D: hang = m, cot = p, cotb = q
	for (i = 0; i < m; i++) {
		for (j = 0; j < q; j++) {
			int tt = 0;
			for (k = 0; k < p; k++) {
				tt = tt + (E[i][k] * C[k][j]);
			}
			D[i][j] = tt;
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < q; j++) {
			printf("%d ", D[i][j]);
		}
		printf("\n");
	}
	
}










int main() {
	int m, n, p, q;
	scanf("%d %d %d %d", &m, &n, &p, &q);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < q; j++) {
			scanf("%d", &C[i][j]);
		}
	}	
	tichMaTran(A, B, m, n, p, q);
	
	return 0;
}
