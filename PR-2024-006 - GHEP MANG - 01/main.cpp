#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int cmp(const void*a, const void*b) {
	return (*(int*)a - *(int*)b);
}

int cmpReverse(const void*a, const void*b) {
	return (*(int*)b - *(int*)a);
}


int main() {
	int t; int m, n; char x;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d\n %c", &m, &n, &x);
		int a[m], b[n], c[m+n];
		int size = 0;
		for (int i = 0; i < m; i++) {
			scanf("%d", &a[i]);
			c[size] = a[i];
			size++;
		}
		for (int i = 0; i < n; i++) {
			scanf("%d", &b[i]);
			c[size] = b[i];
			size++;
		}
		if (x == 'T') {
			qsort(c, m+n, sizeof(int), cmp);
			for (int i = 0; i < m+n; i++) {
				printf("%d ", c[i]);
			}		
		} else if (x == 'G') {
			qsort(c, m+n, sizeof(int), cmpReverse);
			for (int i = 0; i < m+n; i++) {
				printf("%d ", c[i]);
			}
		} else if (x == 'A'){
			for (int i = 0; i < n; i++) {
				printf("%d ", b[i]);
			}
			for (int j = 0; j < m; j++) {
				printf("%d ", a[j]);
			}
		} else if (x == 'F') {
			for (int i = 0; i < m; i++) {
				printf("%d ", a[i]);
			}
			for (int j = 0; j < n; j++) {
				printf("%d ", b[j]);
			}			
		}		
		printf("\n");
	}
	
	
	

	
	
	
	
	
	return 0;
}
