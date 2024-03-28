#include <stdio.h>
#define ll long long

int sumOfDigits(ll n) {
	int sum = 0;
	while (n > 0) {
		sum += n%10;
		n/=10;
	}
	return sum;
}

void solve(ll n) {
	ll tmp = n;
	int sum = 0;
	int i = 2;
	while (n != 1) {
		if (n%i == 0) {
			sum += sumOfDigits(i);
			n/=i;
		} else i++;
	}
	
	if (sum == sumOfDigits(tmp)) printf("YES\n");
	else printf("NO\n");
}



int main() {
	ll n;
	scanf("%lld", &n);
	solve(n);
	
	return 0;
}
