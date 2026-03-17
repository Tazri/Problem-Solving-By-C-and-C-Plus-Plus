// link : https://codeforces.com/contest/799/problem/B
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
    vector<int> price(n);
    vector<int> front(n);
    vector<int> back(n);

    for (int i = 0; i < n; i++)
        cin >> price[i];

    for (int i = 0; i < n; i++)
        cin >> front[i];

    for (int i = 0; i < n; i++)
        cin >> back[i];

    map<int, pair<int, int>> mp;

    vector<multiset<int>> color(4);

    for (int i = 0; i < n; i++)
    {
        mp[price[i]] = {front[i], back[i]};
        color[front[i]].insert(price[i]);
        color[back[i]].insert(price[i]);
    }

    int m;
    cin >> m;
    vector<int> ans(m + 1);

    for (int i = 1; i <= m; i++)
    {
        int c;
        cin >> c;

        if (color[c].size() <= 0)
        {
            ans[i] = -1;
            continue;
        }

        int price = *color[c].begin();
        pair<int, int> p = mp[price];
        int front = p.first;
        int back = p.second;

        ans[i] = price;

        color[front].erase(color[front].find(price));
        color[back].erase(color[back].find(price));
    }

    for (int i = 1; i <= m; i++)
        cout << ans[i] << " \n"[i == m];
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