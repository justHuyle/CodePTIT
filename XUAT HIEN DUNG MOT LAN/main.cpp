#include <stdio.h>
int main() {
	int n, x = 0;
	scanf("%d", &n);
	int A[n];
	
	int size = 1e5, cnt[size];
	for (int i = 0; i < size; i++) {
		cnt[i] = 0;
	}
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (A[j] == A[i]) {
				cnt[A[i]]++;
			}
		}
		if (cnt[A[i]] == 1) x++;
	}
	
	printf("%d\n", x);
	
	for (int i = 0; i < n; i++) {
		if (cnt[A[i]] == 1) printf("%d ", A[i]);
	}
	
	
	return 0;
}
