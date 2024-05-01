#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct SinhVien {
    int maSV;
    char tenSV[105];
    double d1, d2, d3, d;
};

struct SinhVien sv[1005];
char str[105];
void first(int n) {
    for (int i = 1; i <= n; i++) {
        sv[i].maSV = i;
        getchar();
        gets(sv[i].tenSV);
        scanf("%lf%lf%lf", &sv[i].d1, &sv[i].d2, &sv[i].d3);
        sv[i].d = sv[i].d1 + sv[i].d2 + sv[i].d3;
    }
    printf("%d\n", n);
}


void second(int msv) {
    getchar();
    gets(sv[msv].tenSV);
    scanf("%lf%lf%lf", &sv[msv].d1, &sv[msv].d2, &sv[msv].d3);
    sv[msv].d = sv[msv].d1 + sv[msv].d2 + sv[msv].d3;
    printf("%d\n", msv);
}

void third(int n) {
    for (int i = 1; i <= n-1; i++) {
        for (int j = i+1; j <= n; j++) {
            if (sv[i].d > sv[j].d) {
                struct SinhVien tmp = sv[i];
                sv[i] = sv[j];
                sv[j] = tmp;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        printf("%d %s %.1lf %.1lf %.1lf\n", sv[i].maSV, sv[i].tenSV, sv[i].d1, sv[i].d2, sv[i].d3);
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