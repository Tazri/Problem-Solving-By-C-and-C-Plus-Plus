// link : https://codeforces.com/problemset/problem/1820/B
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
    string s;
    cin >> s;
    ll l = s.size();
    s += s;
    ll n;
    n = s.size();

    ll mx = 0;
    ll len = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
            len++;
        else
        {
            mx = max(len, mx);
            len = 0;
        }
    }
    mx = max(len, mx);

    if (mx & 1)
    {
        ll a = (mx + 1) / 2;
        cout << min(a * a, l * l) << endl;
    }
    else
    {
        ll a = mx / 2;
        ll b = a + 1;
        cout << min(a * b, l * l) << endl;
    }
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