#include <stdio.h>

int main() {
	int n, min = 1e5;
	scanf("%d", &n);
	int A[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);		
		if (A[i] < min) min = A[i];
	}
	
	int min2 = 1e5;
	for (int i = 1; i < n; i++) {	
		if (A[i] == min) continue;
		else if (A[i] < min2) min2 = A[i];
	}	
	printf("%d %d", min, min2);
	return 0;
}
