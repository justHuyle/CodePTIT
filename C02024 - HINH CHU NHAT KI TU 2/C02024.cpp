#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
//			if (i >= n/2) printf("%c", (char)n/2+64);
			if (j == 1) {
				if (i > n/2 && n > m) {
					printf("%c", (char)n/2+65);		
				} else {
					printf("%c", (char)i+64);
				}
			}
			else {
				int t = i + j - 1;
				if (t > m) t = m + 1 - j;
				printf("%c", (char)t+64);	
			}
			
		}
		printf("\n");
	}	
}

