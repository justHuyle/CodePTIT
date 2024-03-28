#include <stdio.h>

int main() {
	int m, n, p, q;
	scanf("%d %d", &m, &n);
	int a[m][n];
	int tmp[n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d %d", &p, &q);
	p--; q--;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j == p) printf("%d ", a[i][q]);
			else if (j == q) printf("%d ", a[i][p]);
			else printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
