// link : https://codeforces.com/problemset/problem/1411/B
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

bool isFair(ll n)
{
    vector<bool> mp(10, false);

    ll cn = n;
    while (cn)
    {
        ll d = cn % 10;
        mp[d] = true;
        cn /= 10;
    }

    for (ll d = 1; d < 10; d++)
    {
        if (!mp[d])
            continue;

        if (n % d != 0)
            return false;
    }

    return true;
}

void program()
{
    ll n;
    cin >> n;

    while (true)
    {
        if (isFair(n))
        {
            cout << n << endl;
            return;
        }
        n++;
    }
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