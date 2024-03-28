#include <stdio.h>
#include <math.h>
int solve(long long int n) {
	int ok = 1, cuoi, a1 = n%10; //chu so cuoi 1
	n/=10;
	int a2 = n%10; // chu so cuoi 2
	n/=10;
	if (a1 < a2) return 0;
	
	while (n > 0) {
		cuoi = n%10;
		int tmp = a2;
		a2 = cuoi;
		a1 = tmp;
		if (a2 > a1) return 0;
		
		n/=10;
	}
	return 1;
}


int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long int n;
		scanf("%lld", &n);
		if (solve(n)) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
