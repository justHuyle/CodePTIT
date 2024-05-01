#include <stdio.h>
#include <math.h>
struct dot
{
    double x, y;
};

int isTriangle(double a, double b, double c) {
    return a + b > c && a + c > b && b + c > a;
}

double chuvi(double a, double b, double c) {
    return a + b + c;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        struct dot a, b, c;
        scanf("%lf%lf%lf%lf%lf%lf", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);
        double ab = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
        double bc = sqrt((b.x - c.x)*(b.x - c.x) + (b.y - c.y)*(b.y - c.y));
        double ca = sqrt((c.x - a.x)*(c.x - a.x) + (c.y - a.y)*(c.y - a.y));    
        if (isTriangle(ab, bc, ca)) {
            printf("%.3lf\n", chuvi(ab, bc, ca));
        } else {
            printf("INVALID\n");
        }
        // printf("%lf %lf %lf", ab, bc, ca);
    } 
    return 0;
}