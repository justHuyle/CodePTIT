#include <stdio.h>
#include <math.h>

int max(int a, int b) {
	return (a > b) ? a : b;
}


int prime[(int)1e4];
int size = 1e4;

int main() {
	
	for (int i = 0; i < size; i++) {
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for (int i = 2; i <= sqrt(size); i++) {
		if (prime[i]) {
			for (int j = i*i; j <= size; j+=i) {
				prime[j] = 0;
			}
		}
	}

	
	int n;
	scanf("%d", &n);
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int Max = -1e2;
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (prime[a[i][j]]) {
				cnt++;
			}
		}
		Max = max(Max, cnt);
	}
	
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (prime[a[i][j]]) {
				cnt++;
			}
		}
		if (cnt == Max) {
			printf("%d\n", i+1);
			for (int j = 0; j < n; j++) {
				if (prime[a[i][j]]) {
					printf("%d ", a[i][j]);
				}
			}
			break;
		}
	}
	
	return 0;
}
