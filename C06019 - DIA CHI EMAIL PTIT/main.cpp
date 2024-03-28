#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLower(char *str) {
	int l = strlen(str);
	for (int i = 0; i < l; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] - 'A' + 'a';
		}
	}
}



int main() {
	char name[100], a1[100], a2[100];
	int size = 0;
	gets(name);
	toLower(name);
	
	char *token = strtok(name, " ");
	while (token != NULL) {
		a1[size++] = token[0];
		strcpy(a2, token);
		token = strtok(NULL, " ");
	}
	for (int i = 0; i < size-1; i++) {
		printf("%c", a1[i]);
	}
	printf("%s@ptit.edu.vn", a2);
	
	
	return 0;
}
