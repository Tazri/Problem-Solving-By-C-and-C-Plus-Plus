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
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bool sorted = true;

    for (int i = 1; i < n; i++)
        if (v[i - 1] > v[i])
        {
            sorted = false;
            break;
        }

    if (sorted)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> d;
    d.reserve(n);

    set<int> st;

    for (int vi : v)
    {
        if (st.count(vi))
            continue;

        d.push_back(vi);
        st.insert(vi);
    }

    sort(d.begin(), d.end());

    n = d.size();

    if (n & 1)
    {
        int mid = (n + 1) / 2;
        mid--;
        int ans = max(d[mid] - d[0], d[n - 1] - d[mid]);

        cout << ans << endl;
        return;
    }

    int m1 = n / 2;
    int m2 = (n / 2) + 1;
    m1--;
    m2--;

    int a1 = max(d[m1] - d[0], d[n - 1] - d[m1]);
    int a2 = max(d[m2] - d[0], d[n - 1] - d[m2]);

    int ans = max(a1, a2);

    cout << ans << endl;
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