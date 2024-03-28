#include <stdio.h>

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	printf("Buoc 0: %d\n", a[0]);
	
	for (int i = 1; i < n; i++) {
		int j = i;
		while (j > 0 && a[j-1] > a[j]) {
			swap(&a[j], &a[j-1]);
			j--;
		}
		
		//in ra
		printf("Buoc %d: ", i);
		for (int j = 0; j <= i; j++) printf("%d ", a[j]);
		printf("\n");

	}
	
	return 0;
}
