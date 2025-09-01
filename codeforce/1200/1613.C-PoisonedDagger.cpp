// link : https://codeforces.com/problemset/problem/1613/C
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

bool isPossible(vector<ll> &arr, ll h, ll attack)
{
    ll total = 0;
    ll prev = arr[0];

    for (ll i = 1; i < arr.size(); i++)
    {
        if (prev + attack <= arr[i])
        {
            prev = arr[i];
            total += attack;
            continue;
        }

        total += (arr[i] - prev);
        prev = arr[i];
    }

    total += attack;

    return total >= h;
}

void program()
{
    ll n, h;
    cin >> n >> h;
    vector<ll> arr(n);

    for (ll &ai : arr)
        cin >> ai;

    ll l = 1;
    ll r = h;
    ll ans = h;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        if (isPossible(arr, h, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
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