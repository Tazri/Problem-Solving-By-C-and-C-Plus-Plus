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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    map<ll, ll> freq;
    map<ll, ll> req;

    for (ll &vi : v)
    {
        cin >> vi;
        freq[vi]++;
    }

    if (n % k != 0)
    {
        cout << 0 << endl;
        return;
    }

    ll mxElement = n / k;
    ll el = 0;

    for (pair<ll, ll> frq : freq)
    {
        if (frq.second % k != 0)
        {
            cout << 0 << endl;
            return;
        }

        ll cnt = frq.second / k;
        req[frq.first] = cnt;
        el += cnt;
    }

    if (el != mxElement)
    {
        cout << 0 << endl;
        return;
    }

    map<ll, ll> cnt;
    ll l = 0;
    ll r = 0;
    ll ans = 0;
    while (r < n)
    {
        cnt[v[r]]++;

        if (cnt[v[r]] <= req[v[r]])
        {
            r++;
            continue;
        }

        ll pr = r - 1;
        while (v[l] != v[r])
        {
            ll len = pr - l + 1;
            ans += len;
            cnt[v[l]]--;
            l++;
        }
        ll len = pr - l + 1;
        ans += len;
        cnt[v[l]]--;
        l++;
        r++;
    }

    ll lr = n - 1;
    while (l < n)
    {
        ll len = lr - l + 1;
        ans += len;
        l++;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();

    return 0;
}