#include <stdio.h>

int max(int a, int b) {
	if (a > b) return a;
	return b;
}

int main() {
	int a, b, c, d, e, f, S = 0;
	int max = -1e6;
	scanf("%d %d", &a, &b);
	if (max < a) max = a;
	if (max < b) max = b;
	S += a*b;
	scanf("%d %d", &c, &d);
	if (max < c) max = c;
	if (max < d) max = d;
	S += c*d; 
	scanf("%d %d", &e, &f);
	if (max < e) max = e;
	if (max < f) max = f;
	S += e*f;
	
	if(max*max == S) printf("YES");
	else printf("NO");
	return 0;
}
