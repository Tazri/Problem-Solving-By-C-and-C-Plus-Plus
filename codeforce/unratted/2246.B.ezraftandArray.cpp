// link : https://codeforces.com/contest/2246/problem/B
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

vector<int> v(51);
void precal()
{
    v[1] = 1;
    v[2] = 2;
    v[3] = 3;

    for (int i = 4; i <= 50; i++)
    {
        v[i] = v[i - 1] * 2;
    }
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " \n"[i == n];
    }
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