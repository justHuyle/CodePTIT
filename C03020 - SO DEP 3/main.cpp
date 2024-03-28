#include <stdio.h>
#include <math.h>
#define ll long long

int solve(ll n) {
	int sum = 0, ok = 0;
	ll re_n = 0, tmp = n;
	while (n > 0) {
		if (n%10 == 6) ok = 1;
		re_n = re_n*10 + n%10;
		sum += n%10;
		n/=10;
	}
	if (ok) {
		return tmp == re_n && sum%10 == 8;
	} return 0;

}

int main() {
		ll dau, cuoi;
		scanf("%lld %lld", &dau, &cuoi);
		if (dau > cuoi) {
			int tmp = dau;
			dau = cuoi;
			cuoi = tmp;
		}
		for (ll i = dau; i <= cuoi; i++) {
			if (solve(i)) printf("%lld ", i);
		}
	
	
	return 0;
}
