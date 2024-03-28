#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int x = 0; x <= i; x++) {
			printf("0 ");
		}
		
		for (int j = 1; j < n-i; j++) {
			printf("%d ", j);
		}
		
		
		printf("\n");
	}
	
	
	return 0;
}
