// link : https://codeforces.com/problemset/problem/1790/B
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
    int n, s, r;
    cin >> n >> s >> r;
    int li = s - r;
    s -= li;

    s -= n - 1;
    vector<int> v(n - 1, 1);

    for (int i = 0; i < n - 1; i++)
    {
        int mn = min(s, li - 1);

        s -= mn;
        v[i] += mn;
    }

    for (int vi : v)
        cout << vi << " ";
    cout << li << endl;
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