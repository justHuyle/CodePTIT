#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int A[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &A[i]);
		}
		for (int i = 0; i < n; i++) {
			int ok = 1;
			for (int j = i+1; j < n; j++) {
				if (A[i] <= A[j]) {
					ok = 0;
					break;
				}
			}
			if (ok) {
				printf("%d ", A[i]);
			}
		}
		printf("\n");
		
	}

	
	
	return 0;
}
