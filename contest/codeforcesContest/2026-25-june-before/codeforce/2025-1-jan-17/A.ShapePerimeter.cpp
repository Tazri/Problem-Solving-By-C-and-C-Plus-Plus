// link : https://codeforces.com/contest/2056/problem/A
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

void test()
{
    int n, m;
    cin >> n >> m;
    int xp, yp;
    int x = m, y = m;
    cin >> xp >> yp;
    x += xp;
    y += yp;
    for (int i = 1; i < n; i++)
    {
        int xi, yi;
        cin >> xi >> yi;
        x += xi;
        y += yi;
    }

    x -= xp;
    y -= yp;

    int ans = 2 * (x + y);
    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}