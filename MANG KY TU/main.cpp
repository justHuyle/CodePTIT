#include <stdio.h>
#include <string.h>
int reversible(char s[], int i, int j) {
	int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0, cnt7 = 0, cnt8 = 0, cnt9 = 0, cnt10 = 0;
	while (i < j) {
		if (s[i] == '(') cnt1++;
		if (s[i] == ')') cnt2++;
		if (s[i] == '{') cnt3++;
		if (s[i] == '}') cnt4++;
		if (s[i] == '[') cnt5++;
		if (s[i] == ']') cnt6++;
		if (s[i] == '\'') cnt7++;
		if (s[i] == '\'') cnt8++;
		if (s[i] == '\"') cnt9++;
		if (s[i] == '\"') cnt10++;
		
		i++;
	}
	if (cnt1 == cnt2 && cnt3 == cnt4 && cnt5 == cnt6 && cnt7 == cnt8 && cnt9 == cnt10) return 1;
	return 0;
}

int main() {
	char s[5000];
	fgets(s, 5000, stdin);
	int i = 0, j = strlen(s)-1;
	printf("%d", reversible(s, i, j));
	
	
	return 0;
}
