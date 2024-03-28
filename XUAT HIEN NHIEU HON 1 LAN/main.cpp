#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int A[n];
	int cnt[(int)1e5];
	int ok[(int)1e5];
	int size = 1e5;
	for (int i = 0; i < size; i++) {
		cnt[i] = 0;
	}
	
	for (int i = 0; i < size; i++) {
		ok[i] = 0;
	}
	
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (A[i] == A[j]) {
				cnt[A[i]]++;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		if (cnt[A[i]] >= 2 && ok[A[i]] == 0) {
			printf("%d ", A[i]);
			ok[A[i]] = 1;
		}
	}
	
	
	return 0;
}
