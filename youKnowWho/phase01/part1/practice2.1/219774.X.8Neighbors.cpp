// link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X
#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);
    getchar();

    char matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %c", &matrix[i][j]);
        }
    }

    int r, c;
    scanf("%d %d", &r, &c);
    getchar();

    r--;
    c--;
    int lc = m - 1;
    int lr = n - 1;

    // check top left corner
    if (r > 0 && c > 0)
    {
        if (matrix[r - 1][c - 1] != 'x')
        {
            printf("no\n");
            return 0;
        }
    }

    // check top
    if (r > 0)
    {
        if (matrix[r - 1][c] != 'x')
        {
            printf("no\n");
            return 0;
        }
    }

    // check top right corner
    if (r > 0 && c < lc)
    {
        if (matrix[r - 1][c + 1] != 'x')
        {
            printf("no\n");
            return 0;
        }
    }

    // check right
    if (c < lc)
    {
        if (matrix[r][c + 1] != 'x')
        {
            printf("no\n");
            return 0;
        }
    }

    // check bottom right corner
    if (r < lr && c < lc)
    {
        if (matrix[r + 1][c + 1] != 'x')
        {
            printf("no\n");
            return 0;
        }
    }

    // check bottom
    if (r < lr)
    {
        if (matrix[r + 1][c] != 'x')
        {
            printf("no\n");
            return 0;
        }
    }

    // check bottom left corner
    if (r < lr && c > 0)
    {
        if (matrix[r + 1][c - 1] != 'x')
        {
            printf("no\n");
            return 0;
        }
    }

    // check left
    if (c > 0)
    {
        if (matrix[r][c - 1] != 'x')
        {
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n");
    return 0;
}