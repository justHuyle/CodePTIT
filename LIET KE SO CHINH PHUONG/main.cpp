#include <stdio.h>
#include <math.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	double dau = sqrt(a), cuoi = sqrt(b);
	int dau1 = sqrt(a), cuoi1 = sqrt(b);
	if (dau > dau1) dau1++;
	printf("%d\n", cuoi1-dau1+1);
	for (int i = (int)dau; i <= (int)cuoi; i++) {
		if (i*i >= a && i*i <= b) printf("%d\n", i*i);
	}
	
	
	return 0;
}
