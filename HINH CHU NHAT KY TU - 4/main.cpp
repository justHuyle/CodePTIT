#include <stdio.h>


int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = a; i > 0; i--) {
		for (int j = 64+i; j < 64+i+i; j++) {
			printf("%c", (char)j);
		}
		printf("\n");
	}
	
	for (int i = 0; i <= n; i++) {
		for (int j = 64+i; j <= 64+i+i; j++) {
			printf("%c", (char)j);
		}
		printf("\n");
	}
	
	
	
	return 0;
}

