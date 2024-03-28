#include <stdio.h>
#include <string.h>

void solve(char s[]) {
	int len = strlen(s);
	int ok = ((int)s[0])-48 == 2*((int) s[len-1]-48) ? 1 : 0;
	int ok1 = 2*((int)s[0]-48) == ((int) s[len-1]-48) ? 1 : 0;
	// strcmp
	char str1[50], str2[50];
	for (int i = 1; i < len-1; i++) {
		str1[i-1] = s[i]; 
	}
	for (int i = len-2; i >= 1; i--) {
		str2[i-1] = s[i]; 
	}
	if (!strcmp(str1, str2) && (ok||ok1)) printf("YES\n");
	else printf("NO\n");
}


int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		char s[50];
		scanf("%s", &s);
		solve(s);
	}
}
