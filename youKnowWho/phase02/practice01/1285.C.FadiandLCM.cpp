// link : https://codeforces.com/problemset/problem/1285/C
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

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;

        v.push_back(i);

        if (n / i != i)
            v.push_back(n / i);
    }

    sort(v.begin(), v.end());

    int mn = 1;
    int mx = n;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i; j < v.size(); j++)
        {
            int s = v[i];
            int x = v[j];
            if (lcm(s, x) != n)
                continue;

            if (x < mx)
            {
                mx = x;
                mn = s;
            }
        }
    }

    cout << mn << " " << mx << endl;
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