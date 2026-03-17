// link : https://toph.co/p/modulo
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ":" << endl;

    int n;
    cin >> n;
    priority_queue<pair<int, int>> pq;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        pq.push({vi, i});
    }

    int q;
    cin >> q;

    while (q--)
    {
        int m;
        cin >> m;
        pair<int, int> p = pq.top();

        while (p.first >= m)
        {
            pq.pop();
            p.first %= m;
            pq.push(p);
            p = pq.top();
        }
    }

    vector<int> ans(n);

    while (pq.size())
    {
        pair<int, int> p = pq.top();
        ans[p.second] = p.first;
        pq.pop();
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        _DIBBA(i);
    }
    return 0;
}