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

    for (ll &vi : v)
        cin >> vi;

    ll time = 0;

    for (ll i = 1; i < n; i++)
        time += abs(v[i] - v[i - 1]);

    ll mn = min(time - abs(v[1] - v[0]), time - abs(v[n - 1] - v[n - 2]));

    for (ll i = 1; i < n - 1; i++)
    {
        ll take = time;
        take -= abs(v[i] - v[i - 1]);
        take -= abs(v[i] - v[i + 1]);
        take += abs(v[i - 1] - v[i + 1]);
        mn = min(mn, take);
    }

    cout << mn << endl;
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