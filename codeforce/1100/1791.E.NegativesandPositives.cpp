// link : https://codeforces.com/problemset/problem/1791/E
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
    ll minus = 0;
    ll sum = 0;
    ll mn = 0;
    bool isMinSet = false;

    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;
        ll v = ai < 0 ? ai * -1 : ai;
        sum += v;

        if (ai < 0)
            minus++;

        if (!isMinSet)
        {
            isMinSet = true;
            mn = v;
        }
        else
        {
            mn = min(mn, v);
        }
    }

    if (minus & 1)
    {
        sum -= (mn * 2);
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