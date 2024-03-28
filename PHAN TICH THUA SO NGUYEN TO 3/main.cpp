#include <stdio.h>

void solve(int n) {
	int cnt = 0;
	for (int i = 2; i <= n; i++) {
		cnt = 0;
		while (n%i == 0) {
			++cnt;
			n/=i;
		} 
		if (cnt) {
			printf("%d(%d) ", i, cnt);
			if (n > i) {
				printf(" ");
			}
		}
	}
	printf("\n");	
}


int main() {
	int t, i = 1;
	scanf("%d", &t);
	while (i <= t) {
		int n;
		scanf("%d", &n);
		printf("Test %d: ", i);
		solve(n);
		
		i++;
	}

	
	
	
	return 0;
}
