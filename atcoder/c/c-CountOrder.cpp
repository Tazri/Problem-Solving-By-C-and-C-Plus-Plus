// link : https://atcoder.jp/contests/abc150/tasks/abc150_c?lang=en
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

vector<ll> fact(9);

void calFact()
{
    ll r = 1;

    for (ll i = 1; i <= 8; i++)
    {
        r *= i;
        fact[i] = r;
    }
    fact[0] = 1;
}

ll getRank(vector<ll> &a, ll n)
{
    ll sum = 0;
    ll t = n;
    for (ll i = 0; i < n; i++)
    {
        ll gone = (a[i] - 1) * fact[t - 1];
        sum += gone;

        for (ll j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                a[j]--;
            }
        }
        t--;
    }

    return sum;
}

void program()
{
    calFact();
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);

    for (ll i = 0; i < n; i++)
        cin >> a[i];

    for (ll i = 0; i < n; i++)
        cin >> b[i];

    ll s1 = getRank(a, n);
    ll s2 = getRank(b, n);

    ll d = s1 > s2 ? s1 - s2 : s2 - s1;

    cout << d << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}