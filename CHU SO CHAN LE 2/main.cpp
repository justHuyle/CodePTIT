#include <stdio.h>

int main() {
	
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, even = 0, odd = 0;
		scanf("%d", &n);
		while (n > 0) {
			if (n%10%2 == 0) even++;
			else odd++;
			n/=10;
		}
		printf("%d %d\n", odd, even);		
	}
	
	

	
	
	return 0;
}
