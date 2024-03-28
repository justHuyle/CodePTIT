#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int A[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}

	int max = -1e5;
	int max1 = -1e5;
	for (int i = 0; i < n; i++) {
		if (max < A[i]) max = A[i];
	}
	
	for (int i = 0; i < n; i++) {
		if (A[i] == max) continue;
		else if (max1 < A[i]) max1 = A[i];
	}
	
	printf("%d %d", max, max1);
	
	return 0;
}
