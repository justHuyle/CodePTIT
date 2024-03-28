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
	}
}

int strongNumb (long long n) {
	long long sum = 0;
	long long tmp = n;
	while (n > 0) {
		sum += giaithua(n%10);
		n/=10;
	}
	if (sum == tmp) return 1;
	else return 0;
}

int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if (a > b) {
		long long tmp = a;
		a = b;
		b = tmp;
	}	
	for (long long i = a; i <= b; i++) {
		if (strongNumb(i)) {
			printf("%lld ", i);
		}
	}
	return 0;
}
