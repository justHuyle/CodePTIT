#include <stdio.h>
#include <math.h>

int giaithua(int n) {
	switch(n) {
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 6;
		case 4:
			return 24;
		case 5:
			return 120;
		case 6:
			return 720;
		case 7:
			return 5040;
		case 8:
			return 40320;
		case 9:
			return 362880;	
		case 10:
			return 3628800;
	}
}


int main() {
	int n, sum = 0;
	scanf("%d", &n);
	int tmp = n;
	while (n > 0) {
		sum += giaithua(n%10);
		n/=10;
	}
	if (sum == tmp) printf("1");
	else printf("0");
	return 0;
}
