#include <stdio.h>

int main() {
	int t, x = 1;
	scanf("%d", &t);
	while (x <= t) {
		int n;
		scanf("%d", &n);
		int A[n];
		int size = 1e5+1e4, cnt[size], ok[size];
		
		for (int i = 0; i < size; i++) cnt[i] = 0;
		for (int i = 0; i < size; i++) ok[i] = 0;		
		
		for (int i = 0; i < n; i++) {
			scanf("%d", &A[i]);
		}
		
		for (int i = 0; i < n; i++) {
			cnt[A[i]]++;
		}
		
		printf("Test %d:\n", x);
		
		for (int i = 0; i < n; i++) {
			if (ok[A[i]] == 0) {
				printf("%d xuat hien %d lan\n", A[i], cnt[A[i]]);
				ok[A[i]] = 1;	
			}
		}
		
		x++;
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
