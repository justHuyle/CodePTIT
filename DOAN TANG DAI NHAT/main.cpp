#include <stdio.h>


void solve(int a[], int n) {
	int res = 0, cnt = 0, b[n], dem = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] > a[i-1]) ++dem;
		else dem = 1;
		if (dem > res) {
			res = dem;
			b[0] = i-res+1;
			cnt = 1;
			
		} else if (dem == res) {
			b[cnt] = i-res+1;
			++cnt;
		}
	}
	
	printf("%d\n", res);
	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < res; j++) {
			printf("%d ", a[b[i]+j]);
		}
		printf("\n");
	}
	
	
}



int main() {
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		
		int n;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		
//		int res = 0, cnt = 0, b[n], dem = 1;
//		for (int i = 1; i < n; i++) {
//			if (a[i] > a[i-1])
//		}
		printf("Test %d:\n", i);
		solve(a, n);
		
		
		
		
		
	}
	
	
	return 0;
}
