#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int N = 5 * (1e6);
vector<int> phi;
vector<ll> res(N + 1, 0);

void buildPhi(int n, vector<int> &phi)
{
    phi.resize(n + 1);
    for (int i = 1; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++)
    {
        if (phi[i] == i)
        {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}

void precal()
{
    buildPhi(N, phi);

    for (int i = 2; i <= N; i++)
    {
        res[i] = (ll)phi[i] * phi[i];
        res[i] += res[i - 1];
    }
}

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";
    int l, r;
    cin >> l >> r;
    cout << res[r] - res[l - 1] << endl;
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