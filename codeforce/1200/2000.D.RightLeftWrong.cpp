// link : https://codeforces.com/problemset/problem/2000/D
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
    vector<ll> v(n + 1);
    for (ll i = 1; i <= n; i++)
        cin >> v[i];
    string s;
    cin >> s;

    ll l = -1;
    ll r = -1;

    for (ll i = 1; i <= n; i++)
        v[i] += v[i - 1];

    for (ll i = 0; i < n; i++)
        if (s[i] == 'L')
        {
            l = i;
            break;
        }

    for (ll i = n - 1; i >= 0; i--)
        if (s[i] == 'R')
        {
            r = i;
            break;
        }

    if (l == -1 || r == -1)
    {
        cout << 0 << endl;
        return;
    }

    ll ans = 0;
    while (l <= r)
    {
        if (s[l] != 'L')
        {
            l++;
            continue;
        }

        if (s[r] != 'R')
        {
            r--;
            continue;
        }

        ll left = l + 1;
        ll right = r + 1;

        ans += v[right] - v[left - 1];
        l++;
        r--;
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