#include <stdio.h>
#include <string.h>

int reversible(char s[], int i, int j) {
	while (i < j) {
		if (s[i] != s[j]) return 0;
		if (((int)s[i] - 48)%2 != 0 || ((int)s[j] - 48)%2 != 0) return 0;
		i++;
		j--;
	}
	
	return 1;
}

int even(char s[], int j) {
	for (int i = 0; i <= j; i++) {
		if ((int(s[i]) - 48) % 2 != 0) {
			return 0;
		}
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
		if (reversible(s, i, j) && even(s, j)) {
			printf("YES\n");
		} else printf("NO\n");
	}
	
	
	return 0;
}
