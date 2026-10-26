// link : https://codeforces.com/problemset/problem/1920/C
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
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> d;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;
        d.push_back(i);

        if (i != (n / i))
            d.push_back(n / i);
    }

    sort(d.begin(), d.end());

    int cnt = 1;
    for (int k : d)
    {
        if (k == n)
            continue;
        vector<int> vg;
        for (int i = 0; i < k; i++)
        {
            vector<int> slt;
            for (int j = i; j < n; j += k)
                slt.push_back(v[j]);

            int g = 0;
            for (int i = 1; i < slt.size(); i++)
            {
                if (slt[i] != slt[i - 1])
                    g = gcd(g, abs(slt[i] - slt[i - 1]));
            }
            vg.push_back(g);
        }

        int m = 0;
        for (int gi : vg)
            if (gi != 0)
                m = gcd(m, gi);

        if (m == 1)
            continue;

        bool ans = true;
        if (m == 0)
        {
            cnt++;
            continue;
        }
        for (int i = 0; i < k; i++)
        {
            int num = -1;
            bool ok = true;
            for (int j = i; j < n; j += k)
            {
                int vi = v[j] % m;

                if (num == -1)
                    num = vi;

                if (num != vi)
                {
                    ok = false;
                    break;
                }
            }

            if (!ok)
            {
                ans = false;
                break;
            }
        }

        if (ans)
            cnt++;
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