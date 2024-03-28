#include <stdio.h>
#define ull unsigned long long

// 2 3 5 7

void solve(ull n) {
	int cnt2 = 0, cnt3 = 0, cnt5 = 0, cnt7 = 0;
	while (n > 0) {
		if (n%10 == 2) cnt2++;
		if (n%10 == 3) cnt3++;
		if (n%10 == 5) cnt5++;
		if (n%10 == 7) cnt7++;
		n/=10;
	}
	if (cnt2 != 0) printf("2 %d\n", cnt2);
	if (cnt3 != 0) printf("3 %d\n", cnt3);
	if (cnt5 != 0) printf("5 %d\n", cnt5);
	if (cnt7 != 0) printf("7 %d\n", cnt7);
}


int main() {
	ull n;
	scanf("%llu", &n);
	solve(n);
	
	return 0;
}
