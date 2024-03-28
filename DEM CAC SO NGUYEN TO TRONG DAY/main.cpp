#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
static int intCompare(const void *p1, const void *p2) {
  int int_a = *((int *)p1);
  int int_b = *((int *)p2);

  if (int_a == int_b)
    return 0;
  else if (int_a < int_b)
    return -1;
  else
    return 1;
}



int prime(int n) {
	if (n < 2) return 0;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n%i == 0) return 0;
		}
	}
	return 1;
}



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
			cnt[A[i]]++;
		}
		
		qsort(A, n, sizeof(int), intCompare);
		
		printf("Test %d:\n", x);
		
		for (int i = 0; i < n; i++) {
			if (ok[A[i]] == 0 && prime(A[i])) {
				printf("%d xuat hien %d lan\n", A[i], cnt[A[i]]);
				ok[A[i]] = 1;	
			}
		}
		
		x++;
	}
	return 0;
}
