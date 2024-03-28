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
	int A[n], chan[n], le[n], size1 = 0, size2 = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
		if (A[i]%2 == 0) {
			chan[size1] = A[i];
			size1++;
		} else {
			le[size2] = A[i];
			size2++;
		}
	}
	qsort(chan, size1, sizeof(int), intCompare);
	qsort(le, size2, sizeof(int), intCompare);
	for (int i = 0; i < size1; i++) {
		printf("%d ", chan[i]);
	}
	
	for (int i = 0; i < size2; i++) {
		printf("%d ", le[i]);
	}
	
	
	
	
	return 0;
}
