#include <stdio.h>
#include <math.h>
#define ull unsigned long long

ull A[(int)93];
int size = 93;



int main() {
	A[0] = 0;
	A[1] = 1;
	for (int i = 2; i <= size; i++) {
		A[i] = A[i-1] + A[i-2];
	}
	
	int t;
	scanf("%d", &t);
	while (t--) {
		ull n;
		int ok = 0;
		scanf("%llu", &n);
		for (int i = 0; i <= size; i++) {
			if (A[i] == n) {
				ok = 1;
				printf("YES\n");
				break;
			}
		}
		if (ok == 0) {
			printf("NO\n");
		}
	}

	
	
	return 0;
}

