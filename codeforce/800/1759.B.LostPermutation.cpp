// link : https://codeforces.com/contest/1759/problem/B
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

int f(int l, int r)
{
    int n = r - l + 1;
    int sum = (n * (l + r)) / 2;
    return sum;
}

void _DIBBA(int _DIBBA_NO)
{
    int m, s;
    cin >> m >> s;
    vector<int> v(m);
    set<int> st;
    int mx;

    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
        if (i == 0)
            mx = v[i];
        st.insert(v[i]);
        mx = max(mx, v[i]);
    }

    int lsum = (mx * (mx + 1)) / 2;

    for (int &vi : v)
        lsum -= vi;

    s -= lsum;

    if (s < 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (s == 0)
    {
        cout << "YES" << endl;
        return;
    }

    int l = mx + 1;
    int r = s;
    bool found = false;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int res = f(mx + 1, mid);

        if (res == s)
        {
            found = true;
            break;
        }

        if (res < s)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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