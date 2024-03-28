#include <stdio.h>
#include <string.h>

void removeChar(char str[], char t) {
    int i, j;
    int len = strlen(str);
    for (i = j = 0; i < len; i++) {
        if (str[i] != t) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null-terminate the modified string
}



int main() {
	char c[1000];
	gets(c);
	char w[10];
	scanf("%s", w);
	char *token = strtok(c, " ");
	char a[20][50]; int n = 0;
	while (token != NULL) {
		if (strcmp(token, w) != 0) {
			strcpy(a[n], token);
			++n;
		}
		token = strtok(NULL, " ");
	}
	
	for (int i = 0; i < n; i++) {
			printf("%s", a[i]);
			if (i != n-1) printf(" ");
		}
	
	return 0;
}
