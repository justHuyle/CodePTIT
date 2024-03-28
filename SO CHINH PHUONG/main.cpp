#include <stdio.h>
#include <math.h>

int chinhphuong(int n) {
	return (int) sqrt(n) * sqrt(n) == n; 
}

int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		if (chinhphuong(n)) printf("YES\n");
		else printf("NO\n");
	}
	
	
	return 0;
}
