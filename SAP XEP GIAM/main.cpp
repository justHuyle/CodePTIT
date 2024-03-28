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


int main() {
	int n;
	scanf("%d", &n);
	int A[n];
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	
	
	qsort(A, n, sizeof(int), intCompare);
	for (int i = n-1; i >= 0; i--) {
		printf("%d ", A[i]);
	}	
	return 0;
}
