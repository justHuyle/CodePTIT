#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	// Chia ra 2 truong hop duong va am, roi moi xet chan le
	if (n >= 0) {
		if (n%2 == 0) printf("Duong chan");
		else printf("Duong le");
	} else {
		if (n%2 == 0) printf("Am chan");
		else printf("Am le");
	}
	
	
}
