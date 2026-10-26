// link : https://codeforces.com/contest/1133/problem/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

pair<int, int> f(int a, int b)
{
    int s1 = a < 0 ? -1 : 1;
    int s2 = b < 0 ? -1 : 1;
    int sign = s1 * s2;

    int up = abs(a);
    int down = abs(b);
    int g = gcd(a, b);
    up /= g;
    down /= g;
    return {sign * up, down};
}

void _DIBBA()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    map<pair<int, int>, int> mp;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    int zer = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0 && b[i] == 0)
        {
            zer++;
            continue;
        }

        if (a[i] == 0)
            continue;

        pair<int, int> pr = f(-b[i], a[i]);

        mp[pr]++;
    }

    int mx = 0;
    for (pair<pair<int, int>, int> p : mp)
    {
        mx = max(p.second, mx);
    }

    cout << mx + zer << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    while (t--)
        _DIBBA();
    0;
}