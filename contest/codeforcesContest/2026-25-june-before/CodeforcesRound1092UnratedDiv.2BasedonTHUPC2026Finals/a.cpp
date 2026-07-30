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
    int n, k;
    cin >> n >> k;

    vector<int> a(k);
    vector<int> b(n);

    for (int i = 0; i < k; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    priority_queue<pair<int, int>> pq;

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (b[i] <= k)
            pq.push({b[i], i + 1});
    }

    while (pq.size() > 0)
    {
        if (ans.size() > 1000)
        {
            cout << -1 << endl;
            return;
        }

        pair<int, int> p = pq.top();
        pq.pop();
        ans.push_back(p.second);
        p.first++;

        if (p.first >= k + 1)
            continue;

        pq.push(p);
    }

    if (ans.size() > 1000)
    {
        cout << -1 << endl;
        return;
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " \n"[i == ans.size() - 1];
    }

    if (ans.size() == 0)
        cout << endl;
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