// linK : https://codeforces.com/problemset/problem/339/B
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
    ll n, m;
    cin >> n >> m;

    ll prev = -1;
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        ll ai;
        cin >> ai;

        if (i == 0)
        {
            ans = ai - 1;
            prev = ai;
            continue;
        }

        if (prev <= ai)
        {
            ans += (ai - prev);
            prev = ai;
            continue;
        }

        ans += ai;
        ans += n - prev;
        prev = ai;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}