// link : https://codeforces.com/problemset/problem/1397/B
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

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int mx = (ll)1e9 * n;
    int ans = mx;
    for (int c = 1; binpow(c, n - 1) < 2 * mx; c++)
    {
        int sum = 0;
        bool valid = true;
        for (int i = 0; i < n; i++)
        {
            int curr = binpow(c, i);
            int d = abs(curr - v[i]);
            sum += d;

            if (sum > mx)
            {
                valid = false;
                break;
            }
        }

        if (!valid)
            break;

        ans = min(sum, ans);
    }
    cout << ans << endl;
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