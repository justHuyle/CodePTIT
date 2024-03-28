#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 1; i<= a; i++) {
		for (int x = 1; x < i; x++) {
			printf("~");
		}
		for (int j = 1; j <= b; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
