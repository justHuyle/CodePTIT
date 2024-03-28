#include <stdio.h>
int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int dau = (m > n) ? m : n;
	int dau_cpy = (m > n) ? m : n;	
	for (int i = m; i > 0; i--) {
		int x = 0;
		int z = 0;
		for (int j = dau; j > 0; j--) {
			if (x == n) break;
			else {
				printf("%d", j);
//				x++;
				z = j;	
			}
			x++;
		}
		dau--;
		
//		printf(" %d", x);
		for (int j = z+1; j <= n-x+1; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	
	
	return 0;
}
