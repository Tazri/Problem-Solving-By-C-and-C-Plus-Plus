// link : https://codeforces.com/problemset/problem/2236/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool ok(vector<int> &seg)
{
    if (seg.size() >= 2)
        return true;

    if (seg.back() & 1)
        return false;
    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    vector<int> seg;
    seg.push_back(1);
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            seg[seg.size() - 1]++;
            continue;
        }

        if (v[i] - v[i - 1] <= k)
        {
            seg.push_back(1);
            continue;
        }

        if (ok(seg))
        {
            cout << "YES" << endl;
            return;
        }
        seg.clear();
        seg.push_back(1);
    }

    if (ok(seg))
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