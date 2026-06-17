// link : https://codeforces.com/gym/361788/problem/F
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
    int a, b;
    cin >> a >> b;

    if (b > a)
    {
        cout << 0 << endl;
        return;
    }

    if (a == b)
    {
        cout << "infinity" << endl;
        return;
    }

    int n = a - b;

    vector<int> v;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;

        v.push_back(i);

        if (n / i != i)
            v.push_back(n / i);
    }

    int cnt = 0;

    for (int vi : v)
    {
        if (a % vi == b)
            cnt++;
    }

    cout << cnt << endl;
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