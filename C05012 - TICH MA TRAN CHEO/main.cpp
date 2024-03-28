#include <stdio.h>

int main() {
	int t, i = 1;
	scanf("%d", &t);
	while (i++ <= t) {
		int n;
		scanf("%d", &n);
		int a[n][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = 0;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) {
				a[i][j]+=j+1;	
			}
		}
		
		int b[n][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				b[i][j] = a[j][i];
			}
		}
		
		int c[n][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				int tt = 0;
				for (int k = 0; k < n; k++) {
					tt += a[i][k]*b[k][j];
				}
				
				c[i][j] = tt;
			}
		}
		printf("Test %d:\n", i-1);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
		
			
	}
	return 0;
}
