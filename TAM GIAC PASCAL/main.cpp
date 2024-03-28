#include <stdio.h>

int giaithua(int n) {
	switch(n) {
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 6;
		case 4:
			return 24;
		case 5:
			return 120;
		case 6:
			return 720;
		case 7:
			return 5040;
		case 8:
			return 40320;
		case 9:
			return 362880;	
		case 10:
			return 3628800;
	}
}

int nck(int n, int k) {
	return giaithua(n) / (giaithua(n-k) * giaithua(k));
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d ", nck(i, j));
		}
		printf("\n");
	}
	
	
	return 0;
}

