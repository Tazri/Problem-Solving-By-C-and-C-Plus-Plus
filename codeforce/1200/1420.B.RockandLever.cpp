// link : https://codeforces.com/problemset/problem/1420/B
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

ll nSum(ll n)
{
    return (n * (n + 1)) / 2;
}

void program()
{
    ll n;
    cin >> n;
    vector<ll> v(n);

    set<ll> block;

    for (ll &vi : v)
        cin >> vi;

    ll mask = 1;
    for (ll i = 0; i < 31; mask <<= 1, i++)
        ;
    ll ans = 0;

    vector<int> willblock;
    willblock.reserve(n);
    while (mask)
    {
        int cnt = 0;
        for (ll vi : v)
        {
            if (block.count(vi))
                continue;
            if (vi & mask)
            {
                cnt++;
                willblock.push_back(vi);
            }
        }
        ans += nSum(cnt - 1);

        while (willblock.size())
        {
            block.insert(willblock.back());
            willblock.pop_back();
        }

        mask >>= 1;
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