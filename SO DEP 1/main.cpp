#include <stdio.h>
#include <math.h>

int sumOfDigits(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n%10;
		n/=10;
	}
	return sum;
}

int checkFibo(int n) {
	switch (n) {
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 8:
		case 13:
		case 21:
		case 34:
		case 55:
		case 89:
			return 1;	
	}
	return 0;
}


int main() {
	int prime[(int)1e5];
	int size = 1e5;
	for (int i = 0; i<= size; i++) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for (int i = 2; i <= sqrt(size); i++) {
		if (prime[i]) {
			for (int j = i*i; j <= size; j+=i) {
				prime[j] = 0;
			}
		}
	}
	
	
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	for (int i = a; i <= b; i++) {
		if (prime[i] && checkFibo(sumOfDigits(i))) printf("%d ", i);
	}	
}
