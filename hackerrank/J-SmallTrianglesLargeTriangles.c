// link : https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle *tr, int n)
{
    /**
     * Sort an array a of the length n
     */

     for (int i = 0; i < n; i++)
    {
        int s = i;
        for (int j = i + 1; j < n; j++)
        {
            int sa = tr[s].a;
            int sb = tr[s].b;
            int sc = tr[s].c;
            int a = tr[j].a;
            int b = tr[j].b;
            int c = tr[j].c;

            int sarea = (sa + sb + sc) * (sa + sb - sc) * (sa - sb + sc) * (-sa + sb + sc);
            int jarea = (a + b + c) * (a + b - c) * (a - b + c) * (-a + b + c);

            if (jarea < sarea)
                s = j;
        }

        // swap
        triangle temp = tr[i];
        tr[i] = tr[s];
        tr[s] = temp;
    }

}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}