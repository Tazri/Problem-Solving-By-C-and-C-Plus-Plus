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
    ll n, q;

    cin >> n >> q;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), [](ll a, ll b)
         { return a > b; });

    for (ll i = 1; i < n; i++)
        arr[i] += arr[i - 1];

    while (q--)
    {
        ll x, y;
        cin >> x >> y;

        ll total = arr[x - 1];
        ll payItem = x - y;
        ll index = payItem - 1;

        if (index < 0)
        {
            cout << total << endl;
            continue;
        }

        total -= arr[index];
        cout << total << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}