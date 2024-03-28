#include <stdio.h>
int main() {
	int t, T;
	scanf("%d", &T);
	while (T--) {
		int sum = 0;
		scanf("%d", &t);
		while (t > 0) {
			sum += t%10;
			t/=10;
		}
		printf("%d\n", sum);		
	}

	
	
	return 0;
}
