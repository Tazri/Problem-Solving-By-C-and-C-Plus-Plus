// link : https://codeforces.com/contest/1401/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

void _DIBBA()
{
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> sv(n);
    int mn;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sv[i] = v[i];

        if (i == 0)
            mn = v[i];

        mn = min(mn, v[i]);
    }

    sort(v.begin(), v.end());

    vector<int> st;

    for (int i = 0; i < n; i++)
    {
        if (v[i] != sv[i])
        {
            st.push_back(v[i]);
        }
    }

    if (st.size() <= 0)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i < st.size(); i++)
    {
        if (gcd(st[i], mn) != mn)
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
    while (t--)
        _DIBBA();
    return 0;
}