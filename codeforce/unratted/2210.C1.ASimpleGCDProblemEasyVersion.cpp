// link : https://codeforces.com/contest/2210/problem/C1
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
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    a[0] = gcd(a[0], a[1]);
    a[n - 1] = gcd(a[n - 1], a[n - 2]);

    for (int i = 1; i < n - 1; i++)
    {
        int g1 = gcd(a[i], a[i + 1]);
        int g2 = gcd(a[i], a[i - 1]);

        int l = lcm(g1, g2);

        if (l < b[i])
            a[i] = l;
    }

    a[0] = gcd(a[0], a[1]);
    a[n - 1] = gcd(a[n - 1], a[n - 2]);

    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
            cnt++;

    // for (int i = 0; i < n; i++)
    //     cout << a[i] << " \n"[i == n - 1];

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