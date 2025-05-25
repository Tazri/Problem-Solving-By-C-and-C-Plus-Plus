// link : https://codeforces.com/problemset/problem/2096/B
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
    vector<ll> left(n);
    vector<ll> right(n);
    vector<ll> mn(n);
    for (ll i = 0; i < n; i++)
        cin >> left[i];

    for (ll i = 0; i < n; i++)
        cin >> right[i];

    ll sum = 0;

    for (ll i = 0; i < n; i++)
    {
        sum += max(right[i], left[i]);
        mn[i] = min(right[i], left[i]);
    }

    sort(mn.begin(), mn.end(), [](ll a, ll b)
         { return a > b; });

    for (ll i = 0; i < k - 1; i++)
        sum += mn[i];

    sum++;
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