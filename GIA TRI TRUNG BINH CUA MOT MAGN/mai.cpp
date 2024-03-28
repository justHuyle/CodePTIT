#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int A[n];
	double sum = 0;
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
		sum += (double) A[i];
	}
	
	printf("%.3lf", sum/n);
	return 0;
}
