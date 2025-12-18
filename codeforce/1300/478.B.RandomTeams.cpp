// link: https://codeforces.com/problemset/problem/478/B
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

ll fr(ll n)
{
    n--;
    return (n * (n + 1)) / 2;
}

void program()
{
    ll n, m;
    cin >> n >> m;

    ll mx = fr(n - (m - 1));
    ll mn = 0;

    if (n % m == 0)
        mn = m * fr((n / m));
    else
    {
        ll d = n / m;
        ll r = n % m;
        ll komTeam = m - r;
        mn += komTeam * fr(d);
        mn += r * fr(d + 1);
    }

    cout << mn << " " << mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}