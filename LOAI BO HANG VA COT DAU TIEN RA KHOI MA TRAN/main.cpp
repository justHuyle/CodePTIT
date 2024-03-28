#include <stdio.h>

int main() {
	int t, x = 1;
	scanf("%d", &t);
	while (x <= t) {
		int m, n;
		scanf("%d %d", &m, &n);
		int A[m][n];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				scanf("%d", &A[i][j]);
			}
		}
		printf("Test %d:\n", x);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (i == 0 || j == 0) continue;
				else printf("%d ", A[i][j]);
			}
			printf("\n");
		}
		
		x++;
		
		
		
	}
	
	
	
	return 0;
}
