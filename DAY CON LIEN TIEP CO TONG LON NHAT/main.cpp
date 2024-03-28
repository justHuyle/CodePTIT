#include <stdio.h>
#define ll long long

ll max(ll a, ll b) {
	if (a > b) return a;
	return b;
}



void solve(int a[], int n) {
	ll sum1 = 0, sum2 = -1e9;
	for (int i = 0; i < n; i++) {
		sum1 += a[i];
		sum2 = max(sum1, sum2);
		if (sum1 < 0) sum1 = 0;
	}
	printf("%lld\n", sum2);
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
