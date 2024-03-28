#include <stdio.h>
#include <math.h>
int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double delta = b*b-4*a*c;
	if (delta < 0) printf("NO");
	else if (delta > 0) {
		double x1 = (-b+sqrt(delta))/(2*a);
		double x2 = (-b-sqrt(delta))/(2*a);
		printf("%.2lf %.2lf", x1, x2);
	} else {
		printf("%.2lf", -b/(2*a));
	}
	return 0;
}
