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

    bool found = false;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (st.count(v[i]))
        {
            found = true;
        }

        st.insert(v[i]);
    }

    if (found)
    {
        cout << -1 << endl;
        return;
    }

    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; i++)
        cout << v[i] << " \n"[i == n - 1];
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