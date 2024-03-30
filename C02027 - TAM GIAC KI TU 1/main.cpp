#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	// printf("1");
	for (int i = 1; i <= n; i++) {
		if (i%2 == 0) {
			int cnt = 0;
			for (int j = (i+1)*i/2; j >= i; j--) {
				if (cnt == i) break;
				printf("%c ", (char) j+96);
				cnt++;
			}
			printf("\n");
		} else {
			int cnt = 0;
			for (int j = i*(i-1)/2+1; j <= (i+1)*i/2; j++) {
				if (cnt == i) break;
				printf("%c ", (char)j+96);
				cnt++;
			}
			printf("\n");
		}	
	}
	
	
	
	return 0;
}
