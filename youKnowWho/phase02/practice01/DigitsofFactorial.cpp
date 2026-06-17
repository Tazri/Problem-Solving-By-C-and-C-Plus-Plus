#include <bits/stdc++.h>

using namespace std;

typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define N 1e6
vector<dl> v(N + 123);

void precal()
{
    for (int i = 1; i <= N; i++)
    {
        v[i] = log2(i);
        v[i] += v[i - 1];
    }
}

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";
    int n, k;
    cin >> n >> k;
    dl lg = v[n];
    dl lgk = (lg) / (log2(k));
    int ans = (int)lgk + 1;
    cout << ans << endl;
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