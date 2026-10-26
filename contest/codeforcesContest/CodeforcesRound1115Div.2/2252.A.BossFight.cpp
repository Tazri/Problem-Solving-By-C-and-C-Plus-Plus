// link : https://codeforces.com/contest/2252/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    map<int, int> mp;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        mp[v[i]]++;
    }

    vector<pair<int, int>> vp;
    for (pair<int, int> p : mp)
        vp.push_back(p);

    sort(vp.begin(), vp.end(), [](pair<int, int> a, pair<int, int> b)
         { return a.second > b.second; });

    int mjr = vp[0].first;
    int times = vp[0].second;
    int other = n - times;

    if (vp.size() <= 1)
    {
        int mn = min(2LL, times);
        cout << mn * mjr << endl;
        return;
    }

    if (other >= mjr - 2)
    {
        cout << sum << endl;
    }
    else
    {

        sum -= mjr * times;
        sum += (mjr * min(other + 2, times));
        cout << sum << endl;
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