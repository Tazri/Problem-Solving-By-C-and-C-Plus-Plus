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
    int N = 1e6;
    vector<int> cnt(N + 1);
    vector<int> mul(N + 1);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        cnt[vi]++;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
            mul[i] += cnt[j];
    }

    for (int i = 1; i <= N; i++)
        cout << mul[i] << endl;
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