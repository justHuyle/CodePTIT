#include <stdio.h>
#include <math.h>
void solve(long long n) {
	int ok = 1, cuoi, a1 = n%10; //chu so cuoi 1
	n/=10;
	int a2 = n%10; // chu so cuoi 2
	n/=10;
	printf("%d %d", a1, a2);
}


int main() {
	long long t;
	scanf("%lld", &t);
	solve(t);
	
	return 0;
}
