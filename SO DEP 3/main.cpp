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

int reversible(char s[], int i, int j) {
	while (i < j) {
		if (s[i] != s[j]) return 0;
		i++;
		j--;
	}

	return 1;
}

int primestr(char s[], int j) {
	for (int i = 0; i <= j; i++) {
		if (prime((int)s[i] - 48) == 0) return 0;
	}
	return 1;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		char s[500];
		scanf("%s", &s);
		int i = 0, j = strlen(s)-1;
		if (reversible(s, i, j) && primestr(s, j)) {
			printf("YES\n");
		} else printf("NO\n");
	}	
	
	
	return 0;
}
