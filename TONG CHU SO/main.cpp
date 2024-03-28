#include <stdio.h>

int chinhphuong(int n) {
	return (int) sqrt(n) * sqrt(n) == n; 
}

int main() {
	int t, sum = 0;
	scanf("%d", &t);
	while (t > 0) {
		sum += t%10;
		t/=10;
	}
	
	printf("%d", sum);
	
	
	return 0;
}
