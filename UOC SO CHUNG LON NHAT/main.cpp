#include <stdio.h>
#include <math.h>
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    if (b == 0) 
        return a; 
  
    if (a == b) 
        return a; 

    if (a > b) 
        return gcd(a - b, b); 
    return gcd(a, b - a); 
} 


int main() {
	int t, a, b;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", gcd(a, b));
		
	}

	
	
	return 0;
}
