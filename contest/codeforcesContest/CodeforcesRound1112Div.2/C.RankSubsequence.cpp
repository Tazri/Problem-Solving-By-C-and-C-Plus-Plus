#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool ok(int n, vector<pair<int, int>> &vl, vector<pair<int, int>> &vr, int m)
{

    int rank = 1;
    int take = 0;
    for (int i = 0; i < n; i++)
    {
        int rrank = m - rank + 1;
        if ((vl[i].first <= rank && rank <= vl[i].second) || (vr[i].first <= rrank && rrank <= vr[i].second))
        {
            continue;
        }
        rank++;
        take++;
    }

    return take >= m;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<pair<int, int>> vl(n);
    vector<pair<int, int>> vr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vl[i].first >> vl[i].second;
        cin >> vr[i].first >> vr[i].second;
    }

    for (int i = n; i >= 0; i--)
    {
        if (ok(n, vl, vr, i))
        {
            cout << i << endl;
            return;
        }
    }

    cout << 0 << endl;
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