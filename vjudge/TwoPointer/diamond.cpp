#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    for (int i = 1, space = n - 1; i <= n; i++, space--, star += 2)
    {
        for (int t = 0; t < space; t++)
            printf(" ");
        for (int t = 0; t < star; t++)
            printf("*");
        printf("\n");
    }

    star -= 4;
    for (int i = 0, space = 1; i < n - 1; i++, space++)
    {
        for (int t = 0; t < space; t++)
            printf(" ");

        for (int t = 0; t < star; t++)
            printf("*");

        star -= 2;
        printf("\n");
    }
    return 0;
}