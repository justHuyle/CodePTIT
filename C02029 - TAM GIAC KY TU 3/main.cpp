#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("%c ", (char)i+64);
		int cnt = 1;
		int x = i;
		for (int j = n-1; j >= 1; j--) {
			if (cnt >= i) break;
			x+=j;
			printf("%c ", (char)x+64);
			cnt++;
		}
		
		
		
		printf("\n");
	}
	
	
	
	return 0;
}
