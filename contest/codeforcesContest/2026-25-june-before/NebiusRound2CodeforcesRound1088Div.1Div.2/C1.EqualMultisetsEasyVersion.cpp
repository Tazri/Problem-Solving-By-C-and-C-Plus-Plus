#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool duplicateFound(vector<int> &v, int n)
{
    set<int> st;

    for (int i = 1; i <= n; i++)
    {
        int vi = v[i];
        if (vi == -1)
            continue;

        if (st.count(vi))
            return true;
        st.insert(vi);
    }

    return false;
}

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

    if (duplicateFound(b, n))
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 1; i <= n - k; i++)
    {
        if (a[i] == b[i])
            continue;

        if (b[i] != -1)
        {
            cout << "NO" << endl;
            return;
        }

        b[i] = a[i];
    }

    for (int i = k + 1; i <= n; i++)
    {
        if (a[i] == b[i])
            continue;

        if (b[i] != -1)
        {
            cout << "NO" << endl;
            return;
        }

        b[i] = a[i];
    }

    int l = n - k + 1;
    int r = k;

    vector<bool> mp(n + 1, false);

    for (int i = l; i <= r; i++)
        mp[a[i]] = true;

    for (int i = l; i <= r; i++)
    {
        if (b[i] == -1)
            continue;

        if (mp[b[i]])
            continue;

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