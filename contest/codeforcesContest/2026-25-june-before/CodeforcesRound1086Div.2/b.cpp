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
    int n, k, p, m;
    cin >> n >> k >> p >> m;
    p--;

    queue<int> q;
    multiset<int> mt;

    int did = 0;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (i == p)
            vi *= -1;

        if (i < k)
        {
            mt.insert(vi);
            continue;
        }

        q.push(vi);
    }

    int cnt = 0;

    while (m > 0)
    {
        int mn = *mt.begin();
        mt.erase(mt.find(mn));

        if (mn < 0)
        {
            if ((mn * -1) > m)
                break;
            cnt++;

            m -= (mn * -1);

            q.push(mn);
            mt.insert(q.front());
            q.pop();
            continue;
        }

        if (mn > m)
            break;
        m -= mn;
        q.push(mn);
        mt.insert(q.front());
        q.pop();
    }

    cout << cnt << endl;
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