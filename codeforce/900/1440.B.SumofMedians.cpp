// link : https://codeforces.com/problemset/problem/1440/B
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

    vector<ll> v(n * k);

    for (ll &vi : v)
        cin >> vi;

    reverse(v.begin(), v.end());

    ll mid = n & 1 ? (n + 1) / 2 : n / 2;
    ll d = n - mid;

    // cout << "d : " << d << endl;
    ll sum = 0;
    for (ll t = 0, pi = d; t < k; t++, pi += d + 1)
    {
        // cout << "pi :" << v[pi] << endl;
        sum += v[pi];
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