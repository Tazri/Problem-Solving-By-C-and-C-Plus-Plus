// link : https://atcoder.jp/contests/abc159/tasks/abc159_d?lang=en
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

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
    vector<ll> mp(n + 1, 0);
    vector<ll> arr(n);
    ll cnt = 0;
    for (ll &ai : arr)
    {
        cin >> ai;

        cnt += mp[ai];
        mp[ai]++;
    }

    for (ll &ai : arr)
    {
        if (mp[ai] <= 1)
        {
            cout << cnt << endl;
            continue;
        }

        ll d = mp[ai] - 1;
        ll ans = cnt - d;

        cout << ans << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}