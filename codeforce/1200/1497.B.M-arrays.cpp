// link : https://codeforces.com/problemset/problem/1497/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

void program()
{
    int n, m;
    cin >> n >> m;

    vector<int> mp(m, 0);

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        vi %= m;
        mp[vi]++;
    }

    int cnt = 0;

    if (mp[0])
        cnt++;

    int l = 1;
    int r = m - 1;

    while (l <= r)
    {
        if (l == r)
        {
            if (mp[l])
                cnt++;
            l++;
            r--;
            continue;
        }

        int lc = mp[l];
        int rc = mp[r];

        if (lc == 0 && rc == 0)
        {
            l++;
            r--;
            continue;
        }

        if (lc == 0)
        {
            cnt += rc;
            r--;
            l++;
            continue;
        }

        if (rc == 0)
        {
            cnt += lc;
            r--;
            l++;
            continue;
        }
        l++;
        r--;
        int mn = min(lc, rc);
        int mx = max(lc, rc);
        int d = mx - mn;
        cnt++;
        if (d <= 1)
        {
            continue;
        }

        d -= 1;
        cnt += d;
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}