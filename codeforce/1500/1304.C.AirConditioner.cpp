// link : https://codeforces.com/problemset/problem/1304/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool canReach(int lowest, int highest, int l, int r, int d)
{
    lowest -= d;
    highest += d;

    if ((lowest <= l && l <= highest) || (lowest <= r && r <= highest))
        return true;

    if ((l <= lowest && lowest <= r) || (l <= highest && highest <= r))
        return true;

    return false;
}

struct Costumer
{
    int t, l, r;
};

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;

    vector<Costumer> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i].t >> v[i].l >> v[i].r;

    int lowest = m;
    int highest = m;
    int prev = 0;

    for (int i = 0; i < n; i++)
    {
        int t = v[i].t;
        int l = v[i].l;
        int r = v[i].r;

        int d = t - prev;

        // cout << "d : " << d << endl;

        // cout << "tl : " << l << " tr : " << r << endl;

        if (!canReach(lowest, highest, l, r, d))
        {
            cout << "NO" << endl;
            return;
        }

        highest = min(highest + d, r);
        lowest = max(l, lowest - d);
        // cout << "l : " << lowest << " h: " << highest << endl;
        prev = t;
    }

    cout << "YES" << endl;
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