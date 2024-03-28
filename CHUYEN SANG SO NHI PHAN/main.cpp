#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int index = 0, size = 1e5;
	int A[size];
	
	while (n > 0) {
		A[index] = n%2;
		index++;
		n/=2;
	}
	
	int tmp = 0;
	for (int i = index; i >= 0; i--) {
		if (A[i] != 0) {
			tmp = i;
			break;
		}
	}
	
	for (int i = tmp; i >= 0; i--) {
		printf("%d", A[i]);
	}
	
	return 0;
}
