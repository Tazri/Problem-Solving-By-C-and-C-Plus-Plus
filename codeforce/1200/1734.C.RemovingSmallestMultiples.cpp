// link : https://codeforces.com/problemset/problem/1734/C
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
    string s;
    cin >> s;
    vector<ll> cost;
    cost.reserve(n);
    for (ll i = 0; i < n; i++)
        if (s[i] == '0')
            cost.push_back(i + 1);

    ll ans = 0;
    vector<bool> seive(n + 1, false);
    for (ll i : cost)
    {
        for (ll j = i; j <= n; j += i)
        {
            if (seive[j] == true)
                continue;

            if (s[j - 1] == '1')
                break;

            seive[j] = true;
            ans += i;
        }
    }
    cout << ans << endl;
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