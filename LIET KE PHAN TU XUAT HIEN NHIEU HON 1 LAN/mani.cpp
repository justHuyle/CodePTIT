#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int A[n];
	
	int size = 1e5;
	int ok[size], cnt[size];
	for (int i = 0; i < size; i++) ok[i] = 0;
	for (int i = 0; i < size; i++) cnt[i] = 0;
	
	int cnt1 = 0;
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
		cnt[A[i]]++;	
	}
	
	for (int i = 0; i < n; i++) {
		if (cnt[A[i]] > 1 && ok[A[i]] == 0) {
			cnt1++;
			ok[A[i]] = 1;
		}
	}
	printf("%d\n", cnt1);
	for (int i = 0; i < n; i++) {
		if (cnt[A[i]] > 1 && ok[A[i]] == 1) {
			printf("%d ", A[i]);
			ok[A[i]] = 2;
		}
	}
	
	
	
	return 0;
}
