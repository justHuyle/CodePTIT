#include <stdio.h>

void solve(int n, int k) {
	int index = 1;
	while (index <= n) {
		int tmp = index;
		while (tmp%2 == 0) {
			tmp/=2;
			k--;
		}
		index++;
	}
	if (k <= 0) printf("Yes");
	else printf("No");
	
}



int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	solve(n, k);
	return 0;
}
