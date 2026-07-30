// linK : https://qoj.ac/problem/5650
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool check(vector<int> &b, vector<int> &mp, int mi)
{
    int n = b.size() - 1;

    for (int i = mi + 1; i <= n; i++)
    {
        if (mp[b[i - 1]] > mp[b[i]])
            return false;
    }

    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    vector<int> mp(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        mp[v[i]] = i;
    }

    vector<int> b(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }

    int l = 1;
    int r = n;
    int found = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (check(b, mp, mid))
        {
            found = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if (found == -1)
    {
        cout << 0 << endl;
    }
    else
    {
        int len = n - found + 1;
        cout << n - len << endl;
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