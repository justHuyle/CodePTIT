#include <stdio.h>
int max (int a, int b) {
	if (a > b) return a;
	return b;
}
void solve(int A[][100], int a, int b) {
	int MAX = -1e5;
	for (int i = 0; i < a; i++) {
		int sum = 0;
		for (int j = 0; j < b; j++) {
			sum += A[i][j];
		}
		MAX = max(MAX, sum);
	}
	
	int x = 0, y = 0;
	
	for (int i = 0; i < a; i++) {
		int sum = 0;
		for (int j = 0; j < b; j++) {
			sum += A[i][j];
		}
		if (MAX == sum) {
			for (int j = 0; j < b; j++) {
				A[i][j] = -1;
			}
		}
	}
	
	MAX = -1e5;
	for (int i = 0; i < b; i++) {
		int sum = 0;
		for (int j = 0; j < a; j++) {
			sum += A[j][i];
		}
		MAX = max(MAX, sum);
	}
	
	for (int i = 0; i < b; i++) {
		int sum = 0;
		for (int j = 0; j < a; j++) {
			sum += A[j][i];
		}
		if (MAX == sum) {
			for (int j = 0; j < b; j++) {
				A[j][i] = -1;
			}
		}
	}	
	
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (A[i][j] == -1) continue;
			else printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");	

}



int main() {
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		int A[a][100];
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				scanf("%d", &A[i][j]);
			}
		}
		
		printf("Test %d:\n", i);
		solve(A, a, b);
	}
	
	
	return 0;
}
