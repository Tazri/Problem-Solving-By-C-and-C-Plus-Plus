// link : https://codeforces.com/problemset/problem/1366/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool isIntersect(pair<int, int> p1, pair<int, int> p2)
{
    return (p1.first <= p2.first && p2.first <= p1.second) || (p1.first <= p2.second && p2.second <= p1.second);
}

void _DIBBA(int _DIBBA_NO)
{
    int n, x, m;
    cin >> n >> x >> m;

    int l = x;
    int r = x;

    for (int i = 0; i < m; i++)
    {
        int li, ri;
        cin >> li >> ri;

        if (isIntersect({l, r}, {li, ri}) || isIntersect({li, ri}, {l, r}))
        {
            l = min(li, l);
            r = max(r, ri);
        }
    }

    int cnt = r - l + 1;

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