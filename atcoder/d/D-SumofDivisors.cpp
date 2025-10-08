// link : https://atcoder.jp/contests/abc172/tasks/abc172_d
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
    vector<ll> nod(n + 1);

    for (ll i = 1; i <= n; i++)
        for (ll j = i; j <= n; j += i)
            nod[j]++;

    ll sum = 0;

    for (ll i = 1; i <= n; i++)
        sum += (i * nod[i]);
    cout << sum << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}