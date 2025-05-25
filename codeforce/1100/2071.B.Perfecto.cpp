// link : https://codeforces.com/problemset/problem/2071/B
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

const ll mxN = 5 * 1e5;
const ll sz = (((mxN) * (mxN + 1)) / 2) + 1;
map<int, bool> mp;

void cal()
{
    for (ll i = 1; i * i <= sz; i++)
    {
        mp[i * i] = true;
    }
}

void program()
{
    ll n;
    cin >> n;

    ll sum = (n * (n + 1)) / 2;

    if (mp.count(sum))
    {
        cout << -1 << endl;
        return;
    }

    vector<ll> ans(n + 1, 0);

    // build
    sum = 0;
    ll i = 1;

    while (i <= n)
    {
        sum += i;

        if (mp.count(sum))
        {
            sum += (i + 1);
            ans[i] = i + 1;
            ans[i + 1] = i;
            i += 2;
        }
        else
        {
            ans[i] = i;
            i++;
        }
    }

    cout << ans[1];
    for (ll i = 2; i <= n; i++)
        cout << " " << ans[i];
    cout << endl;
}

int main()
{
    optimize();
    cal();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}