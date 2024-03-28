#include <stdio.h>
#define ll long long

int solve(ll n) {
	int cuoi, a1 = n%10; //chu so cuoi 1
	n/=10;
	int a2 = n%10; // chu so cuoi 2
	n/=10;
	if (a2 <= a1) return 0;
	
	while (n > 0) {
		cuoi = n%10;
		int tmp = a2;
		a2 = cuoi;
		a1 = tmp;
		if (a2 <= a1) return 0;
		
		n/=10;
	}
	return 1;
}



int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		ll a, b;
		int cnt = 0;		
		scanf("%lld %lld", &a, &b);
		for (int i = a; i <= b; i++) {
			if (solve(i)) cnt++;
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}
