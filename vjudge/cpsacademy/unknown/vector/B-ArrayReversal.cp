
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[n - i - 1]);
        getchar();
    }

    printf("%d", arr[0]);

    for (int i = 1; i < n; i++)
        printf(" %d", arr[i]);
    printf("\n");

    return 0;
}