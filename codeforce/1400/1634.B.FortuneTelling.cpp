// link : https://codeforces.com/problemset/problem/1634/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

void _DIBBA(int _DIBBA_NO)
{
    int n, x, y;
    cin >> n >> x >> y;
    y %= 2;
    int curr = x % 2;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        curr += vi;

        curr %= 2;
    }

    if (curr == y)
    {
        cout << "Alice" << endl;
    }
    else
    {
        cout << "Bob" << endl;
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