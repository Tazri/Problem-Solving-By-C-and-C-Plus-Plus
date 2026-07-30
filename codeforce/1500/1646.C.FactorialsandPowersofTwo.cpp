// link : https://codeforces.com/problemset/problem/1646/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<int> v;

void precal()
{
    int f = 2;
    for (int i = 3; i <= 32; i++)
    {
        f *= i;
        if (f > ((ll)1e12))
            break;
        v.push_back(f);
    }
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    int mn = -1;
    for (int mask = 0; mask < (1LL << 12); mask++)
    {
        int sum = 0;
        int cnt = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (mask & (1LL << i))
            {
                sum += v[i];
                cnt++;
            }

            if (sum > n)
                break;
        }

        if (sum > n)
            break;

        int diff = n - sum;
        while (diff)
        {
            if (diff & 1LL)
                cnt++;
            diff >>= 1;
        }

        if (mn == -1)
            mn = cnt;
        mn = min(cnt, mn);
    }

    cout << mn << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}