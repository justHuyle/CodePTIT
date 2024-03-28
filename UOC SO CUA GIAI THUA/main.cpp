#include <stdio.h>
#include <string.h>

void solve(int a, int b) {
	int cnt = 0;
	for (int i = b; i <= a; i++) {
		int tmp = i;
		while(tmp % b == 0) {
			cnt++;
			tmp/=b;
		}
	}
	printf("%d\n", cnt);
	
	
}


int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		scanf("%d %d", &a, &b);		
		solve(a, b);
	}
	
	return 0;
}
