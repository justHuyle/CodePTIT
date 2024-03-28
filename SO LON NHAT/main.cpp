#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, max = -1e5;
		scanf("%d", &n);
		int A[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &A[i]);
			if (max < A[i]) max = A[i];
		}
		printf("%d\n", max);
		for (int i = 0; i < n; i++) {
			if (max == A[i]) {
				printf("%d ", i);
			}
		}
		printf("\n");
		
		
	}
	
	
	return 0;
}
