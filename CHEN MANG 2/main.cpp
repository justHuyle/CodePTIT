#include <stdio.h>

int main() {
	int t, x = 1;
	scanf("%d", &t);
	
	while (x <= t) {
		int n, m, p;
		scanf("%d %d %d", &n, &m, &p);
		int A[n], B[m];
		for (int i = 0; i < n; i++) scanf("%d", &A[i]);
		for (int i = 0; i < m; i++) scanf("%d", &B[i]);
		printf("Test %d:\n", x);
		
		for (int i = 0; i < p; i++) {
			printf("%d ", A[i]);
		}
		for (int i = 0; i < m; i++) {
			printf("%d ", B[i]);
		}
	
		for (int i = p; i < n; i++) {
			printf("%d ", A[i]);
		}
		x++;
		printf("\n");
	
	}
	
	
	return 0;
}
