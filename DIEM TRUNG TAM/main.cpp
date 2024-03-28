#include <stdio.h>


int dem[(int)1e5];
int size = 1e5;

int main() {
	int n, x, y, ans = 0;
	scanf("%d", &n);
	int ok[(int) 1e5];
	int A[(int) 1e5], sizeA = 0;
	
	for (int i = 0; i < n-1; i++) {
		scanf("%d %d", &x, &y);
		if (ok[x] == 0) {
			A[sizeA] = x;
			sizeA++;
		}
		if (ok[y] == 0) {
			A[sizeA] = y;
			sizeA++;
		}
		ok[x] = 1;
		ok[y] = 1;
		dem[x]++;
		dem[y]++;
	}
	
	for (int i = 0; i < sizeA; i++) {
		if (dem[A[i]] == n-1) {
			printf("Yes");
			ans = 1;
			break;
		}
	}
	if (!ans) printf("No");
	
	
	
	return 0;
}
