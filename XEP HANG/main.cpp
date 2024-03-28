#include <stdio.h>
#include <stdlib.h>
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

int max (int a, int b) {
	if (a > b) return a;
	return b;
}

int time[(int) 1e6+1];

int main() {
	int n;
	scanf("%d", &n);
	int A[n];
	int x;
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
		scanf("%d", &x);
		time[A[i]] += x;
	}
	qsort(A, n, sizeof(int), intCompare); //sort mang A
	
	int curTime = 0;
	for (int i = 0; i < n; i++) {
		curTime = max(curTime, A[i]) + time[A[i]];
	}
	printf("%d", curTime%24);
	
	
	return 0;
}
