#include <stdio.h>


int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	for (int i = 1; i <= a; i++) {
		for (int j = a-1; j >= i; j--) {
			printf("%c", (char) +65);
		}
		printf("\n");
	}
	
	
	
	return 0;
}

