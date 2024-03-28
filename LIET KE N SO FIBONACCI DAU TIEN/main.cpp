#include <stdio.h>

void solve(int n) {
	int a = 1, b = 1, c = 1;
	printf("0 1 ");
	while (n > 0) {
		printf("%d ", c);
		c = a+b;
		a = b;
		b = c;

		n--;
	}
}

int main() {
	int n, ok = 1;
	scanf("%d", &n);
	solve(n-2);
	
	return 0;
}
