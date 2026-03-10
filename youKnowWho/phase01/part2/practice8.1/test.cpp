#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        // find the max
        int max = arr[0];

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }

        // cnt max
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == max)
            {
                cnt = cnt + 1;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}