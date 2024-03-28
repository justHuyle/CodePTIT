#include <stdio.h>
#define ll long long

ll gcd(ll a, ll b) {
	while (a != b) {
		if (a > b) a-=b;
		else b-=a;
	}
	return a;
}

void solve(ll a, ll b, ll c, ll d) {
	if (gcd(a, b) == gcd(c, d)) printf("YES\n");
	else printf("NO\n");
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		ll a, b, c, d;
		scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
		solve(a, b, c, d);
	}
	
	
	return 0;
}
