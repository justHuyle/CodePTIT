#include <stdio.h>

struct pokemon
{
    /* data */
    char name[100];
    int tienHoa, da;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct pokemon p[n];
    for (int i = 0; i < n; i++) {
        getchar();
        fgets(p[i].name, 100, stdin);
        scanf("%d%d", &p[i].tienHoa, &p[i].da);
    }

    for (int i = 0; i < n; i++) {
        printf("%c %d %d\n", p[i].name, p[i].tienHoa, p[i].da);
    }

    return 0;
}
