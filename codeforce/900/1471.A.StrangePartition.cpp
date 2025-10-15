// link : https://codeforces.com/problemset/problem/1471/A
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
    ll n, x;
    cin >> n >> x;

    ll sum = 0;
    ll mx = 0;
    ll mn = 0;

    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;
        sum += ai;
        mx += ((ai + x - 1) / x);
    }

    mn = (sum + x - 1) / x;

    cout << mn << " " << mx << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}