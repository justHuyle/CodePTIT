#include <stdio.h>
#include <string.h>
#define ull unsigned long long

int main() {
	
	int t;
	scanf("%d", &t);
	while (t--) {
	
	char a[20], b[20];
	scanf("%s", a);
	scanf("%s", b);
	int sizeA = strlen(a), sizeB = strlen(b);
	int A[sizeA], B[sizeB];
	
	ull x = 0, y = 0;
	//Mang cac chu so
	for (int i = 0; i < sizeA; i++) {
		A[i] = (int) a[i] - 48;
		if (A[i] == 6) A[i] = 5;
		x = x*10+A[i];
	}
	
	for (int i = 0; i < sizeB; i++) {
		B[i] = (int) b[i] - 48;
		if (B[i] == 6) B[i] = 5;
		y = y*10+B[i];
	}
	
	
	printf("%llu ", x+y);
	x = 0, y = 0;
	for (int i = 0; i < sizeA; i++) {
		if (A[i] == 5) A[i] = 6;
		x = x*10+A[i];
	}
	
	for (int i = 0; i < sizeB; i++) {
		if (B[i] == 5) B[i] = 6;
		y = y*10+B[i];
	}
	//cac so
	printf("%llu\n", x+y);		
	}


	
	return 0;
}
