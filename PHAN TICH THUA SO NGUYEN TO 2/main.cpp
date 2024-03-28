#include <stdio.h>

void solve(int n) {
	int i = 2;
	while (n != 1) {
		if (n%i == 0) {
			printf("%d", i);
			if (n != i) printf("x");
			else printf("\n");
			n/=i;
		} else i++;
	}
}

int main() {
	int t, a;
	scanf("%d", &t);
	solve(t);

	
	
	return 0;
}
