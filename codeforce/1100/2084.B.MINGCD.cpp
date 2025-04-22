// link : https://codeforces.com/problemset/problem/2084/B
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
    ll mn;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (i == 0)
        {
            mn = i;
            continue;
        }

        if (arr[i] < arr[mn])
        {
            mn = i;
        }
    }

    ll g = 0;

    for (ll i = 0; i < n; i++)
    {
        if (i == mn)
            continue;

        if (arr[i] % arr[mn] != 0)
            continue;

        if (g == 0)
            g = arr[i];
        else
            g = gcd(g, arr[i]);
    }

    if (g == arr[mn])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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