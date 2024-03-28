#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int i = 63, tmp = n, end = 65+n*2;
	
	while (tmp > 0) {
		for (int j = i+2; j < end; j+=2) {
			printf("%c", (char) j);
		}
		printf("\n");
		i+=2;
		tmp--;
	}
	return 0;
}
