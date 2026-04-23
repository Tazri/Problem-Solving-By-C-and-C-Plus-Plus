// link : https://codeforces.com/contest/1692/problem/G
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

void _DIBBA()
{

    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int w = k + 1;

    int len = 1;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] < v[i] * 2)
        {
            len++;
            continue;
        }

        if (len >= w)
        {
            int add = len - w + 1;
            ans += add;
        }

        len = 1;
    }

    if (len >= w)
    {
        ans += (len - w + 1);
    }

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    while (t--)
        _DIBBA();
    return 0;
}