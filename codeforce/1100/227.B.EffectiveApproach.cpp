// link : https://codeforces.com/problemset/problem/227/B
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

    vector<ll> left(n + 1, 0);
    vector<ll> right(n + 1, 0);

    for (ll i = 1; i <= n; i++)
    {
        ll ai;
        cin >> ai;
        left[ai] = i;

        ll ri = n - i + 1;
        right[ai] = ri;
    }

    ll l = 0;
    ll r = 0;

    ll m;
    cin >> m;

    for (ll i = 0; i < m; i++)
    {
        ll ai;
        cin >> ai;

        l += left[ai];
        r += right[ai];
    }

    cout << l << " " << r << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}