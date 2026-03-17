// link : https://codeforces.com/problemset/problem/597/B
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
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b)
         {
        if(a.second == b.second)return a.first < b.first;
        return a.second < b.second; });

    int cnt = 1;
    pair<int, int> b = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i].first <= b.second)
            continue;
        cnt++;
        b = v[i];
    }

    cout << cnt << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}