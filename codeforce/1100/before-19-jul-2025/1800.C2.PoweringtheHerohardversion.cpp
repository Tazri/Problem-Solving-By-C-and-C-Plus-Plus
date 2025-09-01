// link : https://codeforces.com/contest/1800/problem/C2
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
    priority_queue<ll> pq;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll c;
        cin >> c;

        if (c)
            pq.push(c);
        else
        {
            if (pq.empty())
                continue;
            ans += pq.top();
            pq.pop();
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