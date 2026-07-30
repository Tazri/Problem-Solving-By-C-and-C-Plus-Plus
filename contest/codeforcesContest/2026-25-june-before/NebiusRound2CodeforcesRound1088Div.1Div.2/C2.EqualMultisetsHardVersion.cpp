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
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    vector<int> b(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        cin >> b[i];

    if (k == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (b[i] == -1)
                continue;

            if (b[i] != a[i])
            {
                cout << "NO" << endl;
                return;
            }
        }

        cout << "YES" << endl;
        return;
    }

    int l = 1;
    int r = k;

    vector<int> mp(n + 1, 0);

    for (int i = l; i <= r; i++)
        mp[a[i]]++;

    for (int i = l; i <= r; i++)
    {
        if (b[i] == -1)
            continue;

        if (mp[b[i]] > 0)
        {
            mp[b[i]]--;
            continue;
        }

        cout << "NO" << endl;
        return;
    }

    for (int l = 1, r = k + 1; r <= n; r++, l++)
    {
        if (a[l] == b[l] && a[r] == b[r])
            continue;

        if (b[l] == -1 && b[r] == -1)
            continue;

        if (a[l] == b[l])
        {
            if (b[r] == -1)
                continue;

            cout << "NO" << endl;
            return;
        }

        if (a[r] == b[r])
        {
            if (b[l] == -1)
                continue;
            cout << "NO" << endl;
            return;
        }

        if (b[l] == -1)
        {
            if (a[r] == b[r] || (a[l] == a[r]))
                continue;
            cout << "NO" << endl;
            return;
        }

        if (b[r] == -1)
        {
            if (a[l] == b[l] || (a[l] == a[r]))
                continue;
            cout << "NO" << endl;
            return;
        }

        cout << "NO" << endl;
        return;
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