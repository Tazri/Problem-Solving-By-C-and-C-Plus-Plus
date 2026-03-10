#include <stdio.h>

// take input n and print square of n for multple test case -> t

void testcase()
{
    int n;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("1\n");
        return;
    }
    printf("%d\n", n * n);
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        testcase();
    }
    return 0;
}