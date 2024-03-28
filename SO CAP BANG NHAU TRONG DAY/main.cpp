#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, cnt = 0;
		scanf("%d", &n);
		int A[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &A[i]);
		}
		
		for (int i = 0; i < n-1; i++) {
			if (A[i] == A[i+1]) {
				cnt++;
			}
		}
		printf("%d\n", cnt);
		
	}
	
	

	return 0;
}
