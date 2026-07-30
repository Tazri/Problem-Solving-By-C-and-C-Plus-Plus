#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int x, y;
    cin >> x >> y;

    if (x == 1 && (y & 1))
    {
        cout << "YES" << endl;

        for (int i = 2; i <= x + y; i++)
            cout << 1 << " " << i << endl;

        return;
    }

    if (x > y)
    {
        cout << "NO" << endl;
        return;
    }

    int d = y - x;

    if (d != 0 && (d % 2 == 0))
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    int n = x + y;

    vector<vector<int>> v(n + 1);

    int prev = 0;

    for (int i = 1; i <= 2 * x; i++)
    {
        v[prev].push_back(i);
        prev = i;
    }

    prev = prev == 0 ? 1 : prev;
    for (int i = prev + 1; i <= n; i++)
    {

        v[prev].push_back(i);
    }

    queue<int> q;
    q.push(1);

    while (q.size())
    {
        int u = q.front();
        q.pop();

        for (int to : v[u])
        {
            cout << u << " " << to << endl;
            q.push(to);
        }
    }
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}