// link : https://atcoder.jp/contests/arc086/tasks/arc086_a?lang=en
#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> mp;

    for (int i = 0; i < n; i++)
        mp[a[i]]++;

    vector<pair<int, int>> v;
    for (pair<int, int> p : mp)
    {
        v.push_back({p.second, p.first});
    }

    sort(v.rbegin(), v.rend());

    int ans = 0;
    for (int i = k; i < v.size(); i++)
    {
        ans += v[i].first;
    }

    cout << ans << endl;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}