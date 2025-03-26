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

void test()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> arrA(n);
    vector<ll> arrB(m);

    for (ll i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }

    for (ll i = 0; i < m; i++)
    {
        cin >> arrB[i];
    }

    sort(arrB.begin(), arrB.end(), [](ll a, ll b)
         { return a < b; });

    ll i = n - 1;
    ll j = m - 1;
    ll next = 0;
    while (i >= 0)
    {
        ll a = arrA[i];
        ll b = arrB[j] - a;

        if (i == n - 1)
        {
            next = max(a, b);
            i--;
            continue;
        }

        ll mx = max(a, b);
        ll mn = min(a, b);

        if (mx <= next)
        {
            next = mx;
            i--;
            continue;
        }

        if (mn <= next)
        {
            next = mn;
            i--;
            continue;
        }

        j--;

        if (j >= 0)
        {
            continue;
        }

        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        test();
    return 0;
}