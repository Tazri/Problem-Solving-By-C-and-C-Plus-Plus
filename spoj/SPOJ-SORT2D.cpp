// link : https://vjudge.net/problem/SPOJ-SORT2D/origin
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

struct Point
{
    int x, y;
};

void program()
{
    int n;
    scanf("%d", &n);
    getchar();

    vector<Point> arr(n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].x, &arr[i].y);
        getchar();
    }

    sort(arr.begin(), arr.end(), [](Point left, Point right)
         {
        if(left.x == right.x){
            return left.y > right.y;
        }
        return left.x < right.x; });

    for (Point p : arr)
    {
        printf("%d %d\n", p.x, p.y);
    }
}

int main()
{
    optimize();
    int t;
    scanf("%d", &t);
    while (t--)
        program();
    return 0;
}