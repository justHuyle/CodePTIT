#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int A[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	
	for (int i = 0; i < n-1; i++) {
		printf("Buoc %d: ", i+1);	
		for (int j = i+1; j < n; j++) {
			if (A[i] > A[j]) {
				int tmp = A[i];
				A[i] = A[j];
				A[j] = tmp;
			}
		}
		for (int x = 0; x < n; x++) {
			printf("%d ", A[x]);
		}
		printf("\n");
	}
	
	
	return 0;
}
