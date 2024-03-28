#include <stdio.h>

int mark[5000];

int main() {
	int n, m, k;
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &k);
	int a[m];
	for (int i = 1; i <= m; i++) {
		scanf("%d", &a[i]);
		
		int i1 = 0;
		while (i1 <= k) {
			mark[a[i]+i1] = 1;
			i1++;
		}
		i1 = 0;
		while (i1 <= k) {
			if (a[i] - i1 < 1) break;
			mark[a[i]-i1] = 1;
			i1++;
		}
	}
	
	
	int ok = 1;
	for (int i = 1; i <= n; i++) {
		if (mark[i] == 0) ok = 0;
	}
	
	if (ok) {
		printf("0");
	} else {
		int cnt = 0;
//		for (int i = 1; i <= n; i++) {
//			printf("%d", mark[i]);
//		}
//		printf("\n");
//		
		
		for (int i = 1; i <= n; i++) {
			if (mark[i] == 0) {
				for (int j = i; j <= i+2*k; j++) {
					mark[j] = 1;
				}				
				cnt++;
			}
		}
		
		printf("%d", cnt);
	}	
	return 0;
}

