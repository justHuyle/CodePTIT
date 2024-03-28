#include <stdio.h>
#include <math.h>

int sumOfDigitsEqual10(int n) {
	int sum = 0;
	while (n > 0) {
		if (n%10 == 4) return 0;
		sum += n%10;
		n/=10;
	} 
	return sum%10 == 0;
}

int reversible (int n) {
	int tmp = n, re_n = 0;
	while (n > 0) {
		re_n = re_n*10+n%10;
		n/=10;
	}
	return re_n == tmp;
}


int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int dau = pow(10, n-1);
		int cuoi = pow(10, n);
		for (int i = dau; i <= cuoi; i++) {
			if (sumOfDigitsEqual10(i) && reversible(i)) printf("%d ", i);
		}
		printf("\n");		
	}
	return 0;
}
