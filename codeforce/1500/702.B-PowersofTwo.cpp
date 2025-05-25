// link : https://vjudge.net/problem/CodeForces-702B/origin
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

vector<ll> power;

void cal()
{
    ll num = 1;

    while (num <= 3 * (1e9))
    {
        power.push_back(num);
        num *= 2;
    }
}

void program()
{
    cal();
    ll n;
    cin >> n;
    vector<ll> arr(n);
    map<ll, ll> mp;

    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;

        for (ll p : power)
        {
            if (p < ai)
                continue;

            ll aj = p - ai;

            if (mp.count(aj))
            {
                cnt += mp[aj];
            }
        }
        mp[ai]++;
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}