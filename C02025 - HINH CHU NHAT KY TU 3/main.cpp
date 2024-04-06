#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("%c", (char) j + 64);
        }
        if (m > n && i >= n)
        {
            for (int i = 0; i < n; i++)
            {
                printf("%c", (char)n-1+64);
            }
        }
        else
        {
            for (int j = 0; j < i; j++)
            {
                printf("%c", (char) n - 1 + 64);
            }
        }

        printf("\n");
    }

    return 0;
}