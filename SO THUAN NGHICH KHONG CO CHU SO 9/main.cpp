#include <stdio.h>

int solve(int n) {
	int re_n = 0, tmp = n;
	while(n > 0) {
		if (n%10 == 9) return 0;
		re_n = re_n*10 + n%10;
		n/=10;
	}
	return re_n == tmp;
}


int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		if (solve(i)) {
			printf("%d ", i);
			cnt++;
		}
	}
	printf("\n%d", cnt);
	
	
	return 0;
}
