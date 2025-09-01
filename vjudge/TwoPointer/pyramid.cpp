#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1, space = n - 1, star = 1; i <= n; i++, space--, star += 2)
    {
        for (int t = 0; t < space; t++)
            printf(" ");
        for (int t = 0; t < star; t++)
            printf("*");
        printf("\n");
    }
    return 0;
}