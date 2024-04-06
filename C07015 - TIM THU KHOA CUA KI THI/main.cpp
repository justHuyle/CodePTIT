#include <stdio.h>  

struct thisinh
{
    /* data */
    int id;
    char name[100];
    char date[100];
    float diem;
};



int main() {
    int n;
    scanf("%d", &n);
    float d1, d2, d3, max = -1e2;
    struct thisinh ts[n];
    for (int i = 0; i < n; i++) {
        ts[i].id = i + 1;
        getchar();
        gets(ts[i].name);
        gets(ts[i].date);
        scanf("%f%f%f", &d1, &d2, &d3);
        ts[i].diem = d1 + d2 + d3;
        if (ts[i].diem > max) {
            max = ts[i].diem;
        }
    }

    for (int i = 0; i < n; i++) {
        if (ts[i].diem == max) {
            printf("%d %s %s %.1f\n", ts[i].id, ts[i].name, ts[i].date, ts[i].diem);
        }
    }


    return 0;
}