#include <stdio.h>
#include <string.h>
int main() {
	char s[100000];
	fgets(s, 100000, stdin);
	int cnt = 0;
	for (int i = 0; i < strlen(s); i++) {
			if ((s[i] != ' ' && s[i+1] == ' ') || (s[i] != ' ' && s[i+1] == '\0')) {
				cnt++;
			}
		}
	cnt--;
	printf("%d", strlen(s) - cnt - 2);	
	
	return 0;
}
