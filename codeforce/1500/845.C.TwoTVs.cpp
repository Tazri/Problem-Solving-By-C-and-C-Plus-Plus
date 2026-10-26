// link : https://codeforces.com/contest/845/problem/C
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
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    vector<pair<int, int>> left;

    int r = v[0].second;
    for (int i = 1; i < n; i++)
    {
        if (v[i].first <= r)
        {
            left.push_back(v[i]);
        }
        else
        {
            r = v[i].second;
        }
    }

    if (left.size() <= 0)
    {
        cout << "YES" << endl;
        return;
    }

    r = left[0].second;

    for (int i = 1; i < left.size(); i++)
    {
        if (left[i].first <= r)
        {
            cout << "NO" << endl;
            return;
        }
        r = left[i].second;
    }

    cout << "YES" << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    while (t--)
        _DIBBA();
    return 0;
}