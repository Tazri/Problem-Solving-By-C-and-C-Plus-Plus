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
    int n;
    cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
    }

    if (n == 1)
    {
        cout << "NO" << endl;
        return;
    }

    int limit = (n * n) - n;

    if (n == 2)
        limit = 2;

    for (pair<int, int> p : mp)
    {
        if (p.second > limit)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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