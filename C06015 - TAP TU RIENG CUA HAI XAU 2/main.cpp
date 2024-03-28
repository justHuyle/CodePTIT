#include <stdio.h>
#include <string.h>
#define len 250

int main() {
	int t;
	scanf("%d\n", &t);
	while (t--) {
		char s1[len], s2[len];
		char a1[len][len], a2[len][len], a3[len][len];
		int size1 = 0, size2 = 0, size3 = 0;
		gets(s1);
		gets(s2);
	
		//mang xau a1, a2
		char *tok = strtok(s1, " ");
		while (tok != NULL) {
			strcpy(a1[size1], tok);
			size1++;
			tok = strtok(NULL, " ");
		}
	
		tok = strtok(s2, " ");
		while (tok != NULL) {
			strcpy(a2[size2], tok);
			size2++;
			tok = strtok(NULL, " ");
		}
	
		for (int i = 0 ; i < size1; i++) {
			int ok = 1;
			for (int j = 0; j < size2; j++) {
				if (strcmp(a1[i], a2[j]) == 0) {
					ok = 0;
					break;
				} 
			}
			if (ok) {
				strcpy(a3[size3], a1[i]);
				size3++;
			}
		}
	
		//sort
		for (int i = 1; i < size3; i++) {
			for (int j = 0; j < i; j++) {
				if (strcmp(a3[j], a3[j+1]) > 0) {
					char tmp[105] = {};
					strcpy(tmp, a3[j]);
					strcpy(a3[j], a3[j+1]);
					strcpy(a3[j+1], tmp);
				}
			}
		}
	

		for (int i = 0; i < size3-1; i++) {
			if (strcmp(a3[i], "0") == 0) continue;
			else {
				for (int j = i+1; j < size3; j++) {
					if (strcmp(a3[i], a3[j]) == 0) {
						strcpy(a3[j], "0");
					}	
				}
			}
		}
		for (int i = 0; i < size3; i++) {
			if (strcmp(a3[i], "0") == 0) continue;
			else {
				printf("%s ", a3[i]);
			}
		}
		
		printf("\n");
	}
	return 0;
}
