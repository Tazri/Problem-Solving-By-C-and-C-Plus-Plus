// link : https://codeforces.com/problemset/problem/1808/B
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

ll calSum(vector<ll> &v)
{
    sort(v.begin(), v.end());
    ll n = v.size();
    vector<ll> pre(n);

    for (ll i = 0; i < n; i++)
        pre[i] = v[i];
    for (ll i = 1; i < n; i++)
        pre[i] += pre[i - 1];

    ll sum = 0;
    ll arrSum = pre.back();
    for (ll i = 0; i < n; i++)
    {
        ll s = arrSum - pre[i];
        ll cnt = ((n - 1) - i);

        s -= (cnt * v[i]);
        sum += s;
    }
    return sum;
}

void program()
{
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> cards(n, vector<ll>(m, 0));

    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < m; j++)
            cin >> cards[i][j];

    ll sum = 0;
    for (ll j = 0; j < m; j++)
    {
        vector<ll> nums;
        nums.reserve(n);

        for (ll i = 0; i < n; i++)
            nums.push_back(cards[i][j]);
        sum += calSum(nums);
    }

    cout << sum << endl;
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