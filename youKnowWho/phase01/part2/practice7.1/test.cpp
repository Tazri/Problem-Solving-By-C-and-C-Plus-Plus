#include <stdio.h>

int main()
{
    int n = 4;         // row number
    int star = 1;      // star number start
    int space = n - 1; // space number in start

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= space; s++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");

        // update space and star
        space -= 1;
        star += 2;
    }
    return 0;
}