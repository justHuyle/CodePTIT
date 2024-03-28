#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, ok = 1;
		scanf("%d", &n);
		int A[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &A[i]);
		}
		int x = 0, y = n-1;
		while (x < y) {
			if (A[x] != A[y]) {
				ok = 0;
				break;
			}
			x++;
			y--;
		}
		if (ok) printf("YES\n");
		else printf("NO\n");
		
	}
	
	return 0;
}
