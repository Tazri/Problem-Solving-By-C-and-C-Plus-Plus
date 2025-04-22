// link : https://codeforces.com/problemset/problem/1873/E
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

ll hold(vector<ll> &arr, ll h)
{
    ll water = 0;
    for (ll i = 0; i < arr.size(); i++)
    {
        if (arr[i] < h)
        {
            water += h - arr[i];
        }
    }

    return water;
}

void program()
{
    int n, x;
    cin >> n >> x;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll l = 0;
    ll r = arr[n - 1] + x;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        ll water = hold(arr, mid);

        if (water <= x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << r << endl;
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