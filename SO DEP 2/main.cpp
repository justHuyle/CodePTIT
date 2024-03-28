#include <stdio.h>
#include <string.h>
int reversible(char s[], int i, int j) {
	if (s[0] != '8' || s[strlen(s)-1] != '8') return 0;	
	while (i < j) {
		if (s[i] != s[j]) return 0;
		i++;
		j--;
	}

	return 1;
}

int divisible10(char s[], int j) {
	int sum = 0;
	for (int i = 0; i <= j; i++) {
		sum += ((int) s[i])-48;
	}
	return sum%10 == 0;
}
//
//void divisible10(char s[], int j) {
//	int sum = 0;
//	for (int i = 0; i <= j; i++) {
//		sum += ((int) s[i])-48;
//	}
//	printf("%d", sum%10 == 0);
//}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		char s[500];
		scanf("%s", &s);
		int i = 0, j = strlen(s)-1;
		if (reversible(s, i, j) && divisible10(s, j)) {
			printf("YES\n");
		} else printf("NO\n");
	}	
	
	
	return 0;
}
