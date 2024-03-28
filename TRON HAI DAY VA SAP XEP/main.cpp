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

static int intCompareReverse(const void *p1, const void *p2) {
  int int_a = *((int *)p1);
  int int_b = *((int *)p2);

  if (int_a == int_b)
    return 0;
  else if (int_a > int_b)
    return -1;
  else
    return 1;
}



int main() {
	int t, i = 1;
	scanf("%d", &t);
	while (i <= t) {
		int n;
		scanf("%d", &n);
		int A[n], B[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &A[i]);
		}
		
		for (int i = 0; i < n; i++) {
			scanf("%d", &B[i]);
		}
		
		
		printf("Test %d:\n", i);
		
		qsort(A, n, sizeof(int), intCompare);
		qsort(B, n, sizeof(int), intCompareReverse);
		
		for (int i = 0; i <= 2*n-1; i++) {
			if (i%2 == 0) {
//				if (i >= n) {
//					printf("%d ", A[i/2]);
//				} else {
//					printf("%d ", A[i]);
//				}
				printf("%d ", A[i/2]);
			} else {
//				if (i >= n) {
//					printf("%d ", B[i/2]);
//				} else {
//					printf("%d ", B[i]);
//				}
				printf("%d ", B[i/2]);
			}
		}
		printf("\n");
		
		i++;
	}
	
	
	return 0;
}
