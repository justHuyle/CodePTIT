#include <stdio.h>
#include <string.h>
#define len 250


void toLower(char *str) {
	int l = strlen(str);
	for (int i = 0; i < l; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] - 'A' + 'a';
		}
	}
}





int main() {
	int t, x = 1;
	scanf("%d\n", &t);
	while (x <= t) {
		char s1[len], s2[len], tmp1[len], tmp2[len];
		char a1[len][len], a2[len][len];
		int size1 = 0, size2 = 0;
		
		gets(s1);
		gets(s2);
		strcpy(tmp1, s1); strcpy(tmp2, s2);		
		toLower(tmp1); toLower(tmp2);
		//mang xau a1, a2
		char *tok = strtok(tmp1, " ");
		while (tok != NULL) {
			strcpy(a1[size1], tok);
			size1++;
			tok = strtok(NULL, " ");
		}
		tok = strtok(s1, " ");
		while (tok != NULL) {
			strcpy(a2[size2], tok);
			size2++;
			tok = strtok(NULL, " ");
		}
		
		for (int i = 0; i < size1; i++) {
			if (strcmp(tmp2, a1[i]) == 0) {
				strcpy(a1[i], "0");
				strcpy(a2[i], "0");
			}
		}
		
		
		
		printf("Test %d: ", x);
		for (int i = 0; i < size1; i++) {
			if (strcmp("0", a2[i]) == 0) continue;
			else {
				printf("%s ", a2[i]);
			}
		}
		printf("\n");
		x++;
	}
	return 0;
}
