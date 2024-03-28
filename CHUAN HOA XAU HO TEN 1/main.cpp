#include <stdio.h>
#include <string.h>
#include <ctype.h>


void solve(char s[100], int len) {
	for (int i = 0; i < len; i++) {
		s[i] = tolower(s[i]);
	}
	
	//loai bo khoang trang o dau
	int index = 0;
	for (int i = 0; i < len; i++) {
		if (s[i] != ' ') {
			index = i;
			break;
		}
	}
	

	char s2[len-index]; int size = 0;
	for (int i = index; i < len; i++) {
		s2[size] = s[i];
		size++;
	}
		
	s = s2;	
	
	

	
	for (int i = 0; i < size; i++) {
		if (s[i] != ' ' && s[i-1] == ' ') {
			s[i] = toupper(s[i]);
			s[i-1] = '_';
		}	
	}

	s[0] = toupper(s[0]);

	for (int i = 0; i < size; i++) {
		if (s[i] == ' ') continue;
		if (s[i] == '_') s[i] = ' ';
		printf("%c", s[i]);
	}
	printf("\n");	
}



int main() {
	int t;
	scanf("%d\n", &t);
	while (t--) {
		char s[100];
		fgets(s, 100, stdin);
		int len = strlen(s);
		solve(s, len);
	}
	
	
	return 0;
}
