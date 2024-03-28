#include <stdio.h>
#include <math.h>
#define ull unsigned long long

void solve(int n) {
	int size = n*n;
	int A[size];
	int ok[size];
	
	for (int i = 0; i <= size; i++) {
		ok[i] = 0;
	}

	for (int i = 2; i <= n; i++) {
		A[i] = i;
	}
	
	
	
	for (int i = 2; i <= n/2; i++) {
		for (int j = i+1; j <= n/2; j++) {
			A[i*j] = 1;
			ok[j] = 1;
		}
	}
	
	for (int i = 2; i <= n; i++) {
		printf("%d ", ok[i]);
	}
	printf("\n");
	
	
	for (int i = 2; i <= n; i++) {
		if (ok[i*i] == 0) {
			A[i*i] = i;
		}
	}
	
	for (int i = 2; i <= n; i++) {
		for(int j = i+1; j <= n; j++) {
			if (A[j] == i*i && ok[j] == 0) A[j] = i;
		}
	}
	
	for (int i = 2; i <= n; i++) {
		printf("%d ", A[i]);
	}
		
	ull ans = 1;
	for (int i = 2; i <= n; i++) {
		ans*=A[i];
	}
	printf("%llu\n", ans);
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		solve(n);
	}
	
	
	return 0;
}
