#include <stdio.h>


void solve(int n) {
	int cnt = 0;
	while (n != 0) {
		if (n >= 1000) {
			n-=1000;
			cnt++;	
		}
		else if (n >= 500) {
			n-=500;
			cnt++;
		}
		
		else if (n >= 200) {
			n-=200;
			cnt++;
		}
		
		else if (n >= 100) {
			n-=100;
			cnt++;
		}
		
		else if (n >= 50) {
			n-=50;
			cnt++;
		}
		
		else if (n >= 20) {
			n-=20;
			cnt++;
		}
		
		else if (n >= 10) {
			n-=10;
			cnt++;
		}
		
		else if (n >= 5) {
			n-=5;
			cnt++;
		}
		
		else if (n >= 2) {
			n-=2;
			cnt++;
		}
		
		else if (n >= 1) {
			n-=1;
			cnt++;
		}	
	}
	
	printf("%d\n", cnt);
	
}




int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		solve(n);
	}
	
	
	return 0;
}
