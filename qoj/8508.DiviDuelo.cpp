// link : https://qoj.ac/problem/8508
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
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;

        v.push_back(i);
        ll d = n / i;

        if (d != i)
            v.push_back(d);
    }

    if (v.size() & 1)
    {
        cout << "N" << endl;
        return;
    }

    if (v.size() == 2)
    {
        cout << "Y" << endl;
        return;
    }

    vector<bool> take(v.size(), false);
    sort(v.begin(), v.end());
    ll mx = 1;

    for (ll i = 2; i < v.size(); i++)
    {
        if (take[i])
            continue;
        ll cnt = 0;
        for (ll j = i; j < v.size(); j++)
        {
            if (v[j] % v[i] == 0)
            {
                cnt++;
                take[j] = true;
            }
        }
        mx = max(mx, cnt);
    }

    int d = v.size() / 2;

    if (mx - (d - 1) >= d - 1)
        cout << "Y" << endl;
    else
        cout << "N" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}