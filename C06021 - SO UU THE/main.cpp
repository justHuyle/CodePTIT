#include <stdio.h>
#include <string.h>


void solve(char s[1001]) {
	int len = strlen(s);
	int ok = 1;
	//bien dem
	int even = 0, odd = 0;
	for (int i = 0; i < len; i++) {
		int num = (int) s[i] - 48;
		if (num < 0 || num > 9) {
			ok = 0;
			break;
		}
		else {
			if (num % 2 == 0) even++;
			else odd++;
		}
	}
	if (!ok) {
		printf("INVALID\n");
	} else {
		if ((len%2 == 0 && even > odd) || (len%2 == 1 && even < odd)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	
}


int main() {
	
	int t;
	scanf("%d\n", &t);
	char s[1001];
	while (t--) {
		gets(s);
		solve(s);
		
		
	}
	
	
	return 0;
}
