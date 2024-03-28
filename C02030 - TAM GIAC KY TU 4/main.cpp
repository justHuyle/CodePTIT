#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		
		for (int j = 2; j <= 2*i; j+=2) {
			printf("%c", (char)j+62);
		}
		
		for (int j = 2*i-2; j >= 1; j-=2) {
			printf("%c", (char)j+62);
		}
		printf("\n");
	}
	
	
	return 0;
}

