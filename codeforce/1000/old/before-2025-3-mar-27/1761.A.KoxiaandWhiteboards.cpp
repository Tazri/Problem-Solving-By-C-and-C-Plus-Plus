// link : https://codeforces.com/problemset/problem/1761/B
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

struct customCompare
{
    bool operator()(ll a, ll b)
    {
        return a > b;
    }
};

void program()
{
    priority_queue<ll, vector<ll>, customCompare> pq;

    ll n, m;
    cin >> n >> m;

    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;
        pq.push(ai);
    }

    // now op
    for (ll i = 0; i < m; i++)
    {
        int op;
        cin >> op;
        pq.pop();
        pq.push(op);
    }

    ll ans = 0;

    while (!pq.empty())
    {

        ll t = pq.top();
        pq.pop();
        ans += t;
    }

    cout << ans << endl;
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