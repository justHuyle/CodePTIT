#include <stdio.h>
#include <math.h>
void solve(long long n) {
	int cnt = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n%i == 0) {
			if (i == n/i) {
				if (i%2 == 0) cnt++;
			} else {
				if (i%2 == 0) cnt++;
				if ((n/i)%2==0) cnt++; 
			}
		}
	}
	
	printf("%d\n", cnt);
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long n;
		scanf("%d", &n);
		solve(n);
	}
	
	return 0;
}
