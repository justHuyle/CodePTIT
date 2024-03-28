#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		char kitu = ' ';
		int n, odd = 0, even = 0, cnt = 0;
		while (kitu != '\n') {
			scanf("%d", &n);
			cnt++;
			if (n%2 == 0) even++;
			else odd++;
			
			kitu = getchar();
		}
		if ((cnt%2 == 0 && even > odd) || (cnt%2 != 0 && odd > even)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
//		printf("%d\n", odd);
//		printf("%d\n", even);
//		printf("%d\n", cnt);
	}
	
	
	
}
