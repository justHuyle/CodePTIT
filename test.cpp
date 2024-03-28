#include <stdio.h>
#include <math.h>
int kt(long long int n) {
	int ok = 1, cuoi, a1 = n%10; //chu so cuoi 1
	n/=10;
	int a2 = n%10; // chu so cuoi 2
	n/=10;
	if (a1 < a2) return 0;
	
	while (n > 0) {
		cuoi = n%10; //chu so cuoi thu n-2
		
		int tmp = a2;
		a2 = cuoi;
		a1 = tmp;
		if (a2 > a1) return 0;
		n/=10;
	}
	return 1;
}


int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int a = pow(10, n-1);
		int b = pow(10, n);
		
		for (long long int i = a; i < b; i++) {
			if (kt(i) == 1) printf("%lld ", i);
		}
		printf("\n");
	}
}
