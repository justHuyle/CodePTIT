#include <stdio.h>
#define ll long long

void solve(int n) {
	
	int A[100];
	int size = 100, tmp = 0;
	for (int i = 0; i <= size; i++) {
		A[i] = 0;
	}
	
	int i = 2, mul = 1;
	while (n != 1) {
		if (n%i == 0) {
			if (A[tmp-1] == i) {
				n/=i;
			} else {
				A[tmp] = i;
				tmp++;
				n/=i;	
			}

		} else i++;
	}
	for (int i = 0; i < tmp; i++) {
		mul*=A[i];
	}
	printf("%d\n", mul);
	
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
