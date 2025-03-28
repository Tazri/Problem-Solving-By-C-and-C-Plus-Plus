// link : https://codeforces.com/problemset/problem/1784/A
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

    if (n == 1)
    {
        ll ai;
        cin >> ai;
        cout << ai - 1 << endl;
        return;
    }

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    // sort
    sort(arr.begin(), arr.end(), [](ll a, ll b)
         { return a < b; });

    ll ans = 0;

    if (arr[0] > 1)
    {
        ans += arr[0] - 1;
        arr[0] = 1;
    }

    for (ll i = 1; i < n; i++)
    {
        ll d = arr[i] - arr[i - 1];
        if (d <= 1)
            continue;

        ll should = arr[i - 1] + 1;
        ans += arr[i] - should;
        arr[i] = should;
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