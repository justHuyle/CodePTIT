#include <stdio.h>
#include <string.h>
#include <ctype.h>


int invalid(char s[1001], int len) {
	for (int i = 0; i < len; i++) {
		if ((int) s[i] > 57 || (int)s[i] < 48) {
			return 0;
		}
	}
	if (s[0] == '0') return 0;
	return 1;
}


int solve(char s[1001], int len) {
	int ok[9];
	for (int i = 0; i < 9; i++) ok[i] = 0;
	for (int i = 0; i < len; i++) {
		ok[(int)s[i]-48]++;
	}
	for (int i = 0; i < 9; i++) {
		if (ok[i] == 0) return 0;
	}
	
	return 1;
}


int main() {
	int t;
	scanf("%d\n", &t);
	while (t--) {
		char s[1001];
		gets(s);

		if (invalid(s, strlen(s)) == 0) {
			printf("INVALID\n");
		} else {
			if (solve(s, strlen(s))) {
				printf("YES\n");
			} else printf("NO\n");
		}
		
		
	}
	
	
	
	
	return 0;
}
