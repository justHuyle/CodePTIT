#include <stdio.h>
#include <string.h>
int main() {
	char s[1000];
	fgets(s, 1000, stdin);
	int cntAlphabets = 0, cntNum = 0, cntOthers = 0;
	for (int i = 0; i < strlen(s); i++) {
		int x = (int) s[i];
		if ((x <= 90 && x >= 65) || (x >= 97 && x <= 122)) {
			cntAlphabets++;
		} else if(x <= 57 && x >= 48) cntNum++;
		else cntOthers++;
	}
	printf("%d %d %d", cntAlphabets, cntNum, cntOthers-1);
	
	return 0;
}
