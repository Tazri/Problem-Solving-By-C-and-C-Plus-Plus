// link : https://codeforces.com/problemset/problem/2161/C
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
    ll n, x;
    cin >> n >> x;

    vector<ll> v(n);
    for (ll &vi : v)
        cin >> vi;
    sort(v.begin(), v.end());

    vector<ll> ans;
    ans.reserve(n);

    ll s = 0;
    ll l = 0;
    ll r = n - 1;
    ll polls = 0;
    while (l <= r)
    {
        if ((s + v[l]) / x == (s / x))
        {
            ans.push_back(v[l]);
            s += v[l];
            l++;
            continue;
        }
        ans.push_back(v[r]);
        polls += v[r];
        s += v[r];
        r--;
    }

    cout << polls << endl;
    for (ll i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
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