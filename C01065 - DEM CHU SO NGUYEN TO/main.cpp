#include <stdio.h>
#include <string.h>
int prime(int n) {
	switch(n) {
		case 0:
		case 1:
		case 4:
		case 6:
		case 8:
		case 9:
			return 0;
	}
	return 1;
}

int main() {
	char s[10];
	scanf("%s", &s);
	int len = strlen(s);
	
	int A[10];
	for (int i = 0; i < 10; i++) {
		A[i] = 0;
	}
	
	int ok[10];
	for (int i = 0; i < 10; i++) {
		ok[i] = 0;
	}

	for (int i = 0; i < len; i++) {
		if (prime((int) s[i] - 48)) {
			A[(int) s[i] - 48]++;
		}
	}
	
	for (int i = 0; i < len; i++) {
		int x = (int) s[i] - 48;
		if (prime(x) && ok[x]== 0) {
			printf("%d %d\n", x, A[x] );
			ok[x] = 1;
		}
	}
	
	return 0;
}
