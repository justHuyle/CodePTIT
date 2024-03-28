#include <stdio.h>


int main() {
	int n;
	scanf("%d", &n);
	int tmp = n;
	for (int i = n-1; i >= 0; i--) {
		for (int j = 64+i; j <= 64+i+i; j++) {
			printf("%c", (char)j);
		}
		printf("\n");
	}
	
	
	
	
	
	
	return 0;
}
