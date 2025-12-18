// link : https://codeforces.com/problemset/problem/1406/B
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

void pr(vector<ll> &v, ll r1, ll r2)
{
    ll k = v.size();
    ll n = k - 2;
    vector<ll> ans;
    ans.reserve(n);

    for (ll i = 0; i < k; i++)
    {
        if (i == r1 || i == r2)
            continue;
        ans.push_back(v[i]);
    }

    for (ll i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
}

void program()
{
    ll n;
    cin >> n;
    ll k = n + 2;
    vector<ll> v(k);
    for (ll i = 0; i < k; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    ll firstNsum = 0;
    for (ll i = 0; i < k - 2; i++)
        firstNsum += v[i];

    ll last = v[k - 1];
    ll sum = firstNsum + v[k - 2];

    for (ll i = 0; i < k - 1; i++)
    {
        if (sum - v[i] == last)
        {
            pr(v, i, k - 1);
            return;
        }
    }

    last = v[k - 2];
    sum = firstNsum;
    if (sum == last)
    {
        pr(v, k - 1, k - 2);
        return;
    }

    cout << -1 << endl;
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