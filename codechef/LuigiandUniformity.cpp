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
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll g = arr[0];

    for (ll i = 0; i < n; i++)
    {
        g = gcd(g, arr[i]);
    }

    ll cnt = 0;

    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == g)
            cnt++;
    }

    if (cnt == 0)
    {
        cout << n << endl;
    }
    else
    {
        cout << n - cnt << endl;
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