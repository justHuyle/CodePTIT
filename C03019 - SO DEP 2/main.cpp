#include <stdio.h>
#include <math.h>
#define ll long long

int solve(ll n) {
	int sum = 0;
	ll re_n = 0, tmp = n;
	while (n > 0) {
		re_n = re_n*10 + n%10;
		sum += n%10;
		n/=10;
	}
	
	return tmp == re_n && sum%10 == 0;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, cnt = 0;
		scanf("%d", &n);
		ll dau = pow(10, n-1);
		ll cuoi = pow(10, n);
		for (ll i = dau; i < cuoi; i++) {
			if (solve(i)) cnt++;
		}
		printf("%d\n", cnt);
		
		
		
	}
	
	
	return 0;
}
