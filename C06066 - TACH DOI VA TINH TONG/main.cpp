#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char *str) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}




int main() {



    return 0;
}