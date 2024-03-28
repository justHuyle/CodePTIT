#include <stdio.h>
#include <string.h>
#include <ctype.h>

int allEqual(char s[5]) {
	return (s[0] == s[1]) && (s[1] == s[2]) && (s[2] == s[3]) && (s[3] == s[4]);
}

int equal3 (char s[5]) {
	return (s[0] == s[1]) && (s[1] == s[2]);
}

int equal2 (char s[5]) {
	return s[3] == s[4];
}

int equal8_or6(char s[5]) {
	for (int i = 0; i < 5; i++) {
		if (s[i] != '6' && s[i] != '8') return 0;
	}
	return 1;
}

int increase(char s[5]) {
	return (s[0] < s[1]) && (s[1] < s[2]) && (s[2] < s[3]) && (s[3] < s[4]);
}



int main() {
	int t;
	scanf("%d\n", &t);
	while (t--) {
		char s[100], use[7];
		fgets(s, 100, stdin);
		int lenS = strlen(s);
		int lenU = 0;
		for (int i = lenS - 7; i < lenS; i++) {
			if (s[i] == '.') continue;
			else {
				use[lenU] = s[i];
				lenU++;				
			}
		}
		
		if (allEqual(use) || increase(use) || (equal2(use) && equal3(use)) || equal8_or6(use)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
//		printf("%d", allEqual(use));
//		printf("%d", increase(use));
//		printf("%d", (equal2(use)) && equal3(use));
//		printf("%d", equal8_or6(use));				
		
	}

	
	
	return 0;
}
