// link : https://codeforces.com/problemset/problem/1733/B
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
    int n, x, y;

    cin >> n >> x >> y;
    int games = n - 1;

    if (x == 0 && y == 0)
    {
        cout << -1 << endl;
        return;
    }

    if (x != 0 && y != 0)
    {
        cout << -1 << endl;
        return;
    }

    if (x == 0)
    {
        x = y;
        y = 0;
    }

    if (games % x == 0)
    {
        int p = 2;
        cout << p;
        int i = 1;
        if (i % x == 0)
        {
            p = i + 2;
        }
        for (i = 2; i <= games; i++)
        {
            cout << " " << p;

            if (i % x == 0)
            {
                p = i + 2;
            }
        }
        cout << endl;
        return;
    }
    else
    {
        cout << -1 << endl;
        return;
    }
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