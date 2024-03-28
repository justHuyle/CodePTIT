#include <stdio.h>
int main() {
	
	int m, n;
	scanf("%d %d", &m, &n);
	for (int i = 1; i <= m; i++) {
		int d = 1;
		for (int j = i; j > 1; j--) {
			if (d > n) continue;
			printf("%d", j);
			d++;
		}
		for (int j = 1; j <= n-i+1; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	
	
	return 0;
}
