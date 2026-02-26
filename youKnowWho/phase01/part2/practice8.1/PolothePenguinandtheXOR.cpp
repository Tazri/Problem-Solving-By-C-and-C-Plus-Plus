#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

void program()
{
    ll n;
    cin >> n;
    vector<ll> prefix(n + 1);

    for (ll i = 1; i <= n; i++)
    {
        cin >> prefix[i];
        prefix[i] ^= prefix[i - 1];
    }

    vector<vector<ll>> cnt(n + 1, vector<ll>(31, 0));

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 0; j <= 30; j++)
        {
            ll mask = 1 << j;

            if (prefix[i] & mask)
            {
                cnt[i][j]++;
            }
        }
    }

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 0; j <= 30; j++)
        {
            cnt[i][j] += cnt[i - 1][j];
        }
    }

    ll ans = 0;

    for (ll i = 1; i <= n; i++)
    {
        // for (ll j = 0; j <= 30; j++)
        // {
        //     cout << cnt[i][j] << " \n"[j == 2];
        // }

        for (ll j = 0; j <= 30; j++)
        {
            ll one = cnt[i][j];
            ll zero = (i + 1) - one;

            ll mask = 1 << j;
            ll curr = !!(prefix[i] & mask);
            ll contrib = 0;
            if (curr)
                contrib = zero;
            else
                contrib = one;
            ans += (contrib * mask);
            // cout << "contrib : " << contrib << " z : " << zero << " o : " << one << endl;
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();

    ll t = 1;
    cin >> t;
    while (t--)
        program();
    return 0;
}