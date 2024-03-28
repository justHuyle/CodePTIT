#include <stdio.h>

void solve(int A[], int n) {
	int size = 30001;
	int dem[size], ok[size];
	for (int i = 0; i < size; i++) {
		dem[i] = 0;
		ok[i] = 0;
	}
	
	for (int i = 0; i < n; i++) {
		dem[A[i]]++;
	}
	int max = -1e2;
	
	for (int i = 0; i < n; i++) {
		if (max < dem[A[i]]) max = dem[A[i]];	
	}
	for (int i = 0; i < n; i++) {
		if (max == dem[A[i]] && ok[A[i]] == 0) {
			printf("%d ", A[i]);
			ok[A[i]] = 1;
		}	
	}
	printf("\n");
	
}


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
		solve(A, n);
		
	}
	
	
	return 0;
}
