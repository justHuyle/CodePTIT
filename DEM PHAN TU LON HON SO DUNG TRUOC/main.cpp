#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, cnt = 1;
		scanf("%d", &n);
		int A[n];

		for (int i = 0; i < n; i++) {
			scanf("%d", &A[i]);
		}
		
		for (int i = 1; i < n; i++) {
			int ok = 1;
			for (int j = 0; j < i; j++) {
				if (A[j] > A[i]) {
					ok = 0;
					break;
				}
			}
			if (ok) cnt++;
		}
		printf("%d\n", cnt);
		
	}
	
	return 0;
}
