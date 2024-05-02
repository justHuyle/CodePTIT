#include <stdio.h>


struct sinhVien
{
    int id;
    char name[255];
    double d1, d2, d3;
};

struct sinhVien sv[1005];
char str[255];

void first(int n) {
    for (int i = 1; i <= n; i++) {
        sv[i].id = i;
        getchar();
        gets(sv[i].name);
        scanf("%lf%lf%lf", &sv[i].d1, &sv[i].d2, &sv[i].d3);
    }
    printf("%d\n", n);
}

void second(int msv) {
    getchar();
    gets(sv[msv].name);
    scanf("%lf%lf%lf", &sv[msv].d1, &sv[msv].d2, &sv[msv].d3);
    printf("%d\n", msv);
}

void third(int n) {
    for (int i = 1; i <= n-1; i++) {
        if (sv[i].d1 <= sv[i].d2 && sv[i].d2 <= sv[i].d3) {
            printf("%d %s %.1lf %.1lf %.1lf\n", sv[i].id, sv[i].name, sv[i].d1, sv[i].d2, sv[i].d3);
        }
    }
}

int main() {
    int n, choice;
    while (1) {
        scanf("%d", &choice);
        if (choice == 1) {
            scanf("%d", &n);
            first(n);
        } else if (choice == 2) {
            int msv;
            scanf("%d", &msv);
            second(msv);
        } else {
            third(n);
            return 0;
        }
    }


    return 0;
}