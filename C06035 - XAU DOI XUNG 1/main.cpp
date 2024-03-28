#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define length 100

void solve(char s[length]) {
	int l = 0, r = strlen(s)-1, cnt = 0;
	while (l <= r) {
		if (l == r && cnt == 0) cnt = 1;
		if (s[l] != s[r]) cnt++;
		l++;
		r--;
	}
	
	if (cnt == 1) {
		printf("YES\n");
	} else printf("NO\n");
}


int main() {
	int t;
	scanf("%d\n", &t);
	char s[length];
	while (t--) {
		gets(s);
		solve(s);
	}
	
	
		
	return 0;
}
