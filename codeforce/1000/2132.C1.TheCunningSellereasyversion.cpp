// link : https://codeforces.com/contest/2132/problem/C1
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

int getPrice(int x)
{
    return binpow(3, x + 1) + x * binpow(3, x - 1);
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    vector<int> deals;

    while (n)
    {
        deals.push_back(n % 3);
        n /= 3;
    }

    int cost = 0;
    for (int i = 0; i < deals.size(); i++)
    {
        cost += getPrice(i) * deals[i];
    }

    cout << cost << endl;
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