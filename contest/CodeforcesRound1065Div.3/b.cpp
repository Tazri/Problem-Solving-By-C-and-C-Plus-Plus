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
    vector<ll> v(n);

    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] == -1)
            cnt++;
    }

    if (cnt == 0)
    {
        ll diff = 0;
        for (ll i = 1; i < n; i++)
            diff += (v[i] - v[i - 1]);
        diff = abs(diff);

        cout << diff << endl;
        for (ll i = 0; i < n; i++)
            cout << v[i] << " \n"[i == n - 1];
        return;
    }

    if (v[0] == -1 || v[n - 1] == -1)
    {
        if (v[0] == -1)
            v[0] = v[n - 1];
        if (v[n - 1] == -1)
            v[n - 1] = v[0];

        for (ll i = 0; i < n; i++)
        {
            if (v[i] == -1)
                v[i] = 0;
        }

        cout << 0 << endl;
        for (ll i = 0; i < n; i++)
            cout << v[i] << " \n"[i == n - 1];
        return;
    }

    for (ll i = 0; i < n; i++)
    {
        if (v[i] == -1)
            v[i] = 0;
    }

    ll diff = 0;
    for (ll i = 1; i < n; i++)
        diff += (v[i] - v[i - 1]);
    diff = abs(diff);

    cout << diff << endl;
    for (ll i = 0; i < n; i++)
        cout << v[i] << " \n"[i == n - 1];
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