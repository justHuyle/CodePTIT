#include <stdio.h>
#include <math.h>
int prime(int n) {
	if (n < 2) return 0;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n%i == 0) {
				return 0;
			}
		}
	}
	return 1;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		if (prime(n)) printf("YES\n");
		else printf("NO\n");
		
	}

	
	
	return 0;
}
