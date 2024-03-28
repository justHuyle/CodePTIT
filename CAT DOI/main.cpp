#include <stdio.h>
#include <string.h>


int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int ok = 1;
		char str[50];
		scanf("%s", str);
		int len = strlen(str);
		char str0[50];
		for (int i = 0; i < len; i++) {
			str0[i] = '0';
		}
		for (int i = 0;  i < len; i++) {
			if (str[i] == '1') str[i] = '1';
			else if (str[i] == '8') str[i] = '0';
			else if (str[i] == '9') str[i] = '0';
			else if (str[i] == '0') str[i] = '0';
			else {
				ok = 0;
				break;
			}
		}
		if (!ok || !strcmp(str, str0)) printf("INVALID\n");
		else {
			int index = 0;
			for (int i = 0; i < len; i++) {
				if (str[i] != '0'){
					index = i;
					break;
				}
			}
			for (int i = index; i < len; i++) {
				printf("%c", str[i]);
			}
			printf("\n");
		}
//		printf("%s", str);
		
		
	}
	
	return 0;
}
