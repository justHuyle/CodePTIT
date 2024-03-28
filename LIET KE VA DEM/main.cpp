#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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


int solve(int n) {
	int cuoi, a1 = n%10; //chu so cuoi 1
	n/=10;
	int a2 = n%10; // chu so cuoi 2
	n/=10;
	if (a1 < a2) return 0;
	
	while (n > 0) {
		cuoi = n%10;
		int tmp = a2;
		a2 = cuoi;
		a1 = tmp;
		if (a2 > a1) return 0;
		
		n/=10;
	}
	return 1;
}


int main() {
	int n;
	int sizeA = 1e6+1;
	int A[(int)1e6+1]; //mang dem
	int B[(int)1e6+1];
	int C[(int)1e6+1];


	
	for (int i = 0; i < sizeA; i++) {
		A[i] = 0, B[i] = 0, C[i] = 0;
	}
	int size = 0;
	while (!feof(stdin)) {
		scanf("%d", &n);
		if (solve(n)) {
			if (A[size] == 0) {
				B[size] = n;
				A[size]++;	
				size++;
	
			} else {
				A[size]++;
			}
		}
	}
	
	
//	qsort(A, sizeA, sizeof(int), intCompareReverse);
	
	for (int i = 0; i < size; i++) {
		printf("%d\n", A[i]);
	}
	
	return 0;
}
