#include <stdio.h>
#include <string.h>
int lm(char c) {
    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    default:
        return 1000;
    }
}


int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char str[105];
        scanf("%s", str);
        int l = strlen(str);
        int aft = 0, bf = 0, s = 0;
        for (int i = l-1; i >= 0; i--) {
            aft = lm(str[i]);
            if (i == l-1) {
                s += aft;
            } else if (aft < bf) {
                s -= aft;
            } else {
                s += aft;
            }
            bf = aft;
        }
        printf("%d\n", s);
    }


    return 0;
}