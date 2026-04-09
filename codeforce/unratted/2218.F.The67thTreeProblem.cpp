// link : https://codeforces.com/contest/2218/problem/F
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
    int x, y, n;
    cin >> x >> y;
    n = x + y;

    if (x == 0 && n % 2 == 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (y == 0 && n % 2 == 1)
    {
        cout << "NO" << endl;
        return;
    }

    if (n % 2 == 0)
        x--;
    else
        y--;
    n--;

    if (x > y)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    vector<int> graph(n + 3);
    int prev = 2;
    for (int i = 0; i < y; i++)
    {
        graph[prev] = 1;
        prev++;
    }

    for (int k = prev, i = 0, u = 2; i < x; i++, u++, k++)
    {
        graph[k] = u;
    }

    int cp = n + 1;
    for (int i = 2; i <= cp; i++)
        cout << i << " " << graph[i] << endl;
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