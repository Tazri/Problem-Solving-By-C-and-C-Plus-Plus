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
    ll n, c;
    cin >> n >> c;

    ll sum = 0;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
        cin >> v[i];
    string s;
    cin >> s;
    ll extra = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
            sum += v[i];
        else
            extra += v[i];
    }

    if (c > sum)
    {
        cout << sum << endl;
        return;
    }

    if (extra > c)
    {
        sum -= c;
        sum += extra;
    }

    cout << sum << endl;
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