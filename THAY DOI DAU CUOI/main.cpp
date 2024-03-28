#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int dau = 0, cuoi = n%10;
	int tmp = n;
	
	while (n > 0) {
		dau = n%10;
		n/=10;
	}
	n = tmp*1;
	n/=10; n = n*10+dau;
	// dao nguoc n
	int re_n = 0;
	while (n > 0) {
		re_n = re_n*10+n%10;
		n/=10;
	}
	//1321
	re_n /= 10; re_n = re_n*10+cuoi;
	
	n = re_n*1;
	int re_n1 = 0;
	while (n > 0) {
		re_n1 = re_n1*10+n%10;
		n/=10;
	}
	printf("%d", re_n1);
	return 0;
}
