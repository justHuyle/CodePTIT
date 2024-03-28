#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int A[n];
	int size = 1e5, cnt[size], ok[size];
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
		cnt[A[i]]++;
	}
	for (int i = 0; i < n; i++) {
		if (ok[A[i]] == 0) {
			printf("%d ", A[i]);
			printf("%d\n", cnt[A[i]]);
			ok[A[i]] = 1;	
		}
		
	}
	
	
	
	
	
	return 0;
}
