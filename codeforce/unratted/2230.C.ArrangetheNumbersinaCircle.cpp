// link : https://codeforces.com/contest/2230/problem/C
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
    int n;
    cin >> n;

    int d = 0;
    vector<int> v;
    v.reserve(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        sum += vi;
        if (vi > 1)
            v.push_back(vi);
        else
            d++;
    }

    if (sum < 3)
    {
        cout << 0 << endl;
        return;
    }

    if (v.size() <= 0)
    {
        cout << 0 << endl;
        return;
    }

    if (v.size() == 1)
    {
        int t = v.back();

        int bs = 0;
        int mn = min(d, t / 2);
        bs += mn;
        bs += t;
        cout << bs << endl;
        return;
    }

    int ans = 0;

    for (int vi : v)
    {
        if (vi <= 3)
            ans += vi;
        else
        {

            int t = vi;
            t -= 2;
            int can = t / 2;
            int mn = min(can, d);
            d -= mn;
            ans += mn;
            ans += vi;
        }
    }

    cout << ans << endl;
}

void hijack(int caseno)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (caseno == 43)
    {
        cout << n << endl;
        for (int vi : v)
            cout << vi << " ";
    }
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    // if (t == 10000)
    //     for (int i = 1; i <= t; i++)
    //         hijack(i);
    // else
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}