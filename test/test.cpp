#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    // upper part
    for (int i = 1; i <= n; i++)
    {
        printf("*");
    }
    printf("\n");

    // middle part
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i == 1)
    //     {
    //         printf("*");
    //     }
    //     else if (i == n)
    //     {
    //         printf("*");
    //     }
    //     else
    //     {
    //         printf(" ");
    //     }
    // }

    printf("*"); // starting star
    for (int i = 1; i <= n - 2; i++)
    {
        printf(" ");
    }
    printf("*"); // ending star
    printf("\n");

    // lower part
    for (int i = 1; i <= n; i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}

/*

*******
*/