// link : https://codeforces.com/problemset/problem/285/C
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

    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    ll sum = 0;

    for (ll i = 1; i <= n; i++)
    {
        ll vi = v[i - 1];

        sum += abs(vi - i);
    }

    cout << sum << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}