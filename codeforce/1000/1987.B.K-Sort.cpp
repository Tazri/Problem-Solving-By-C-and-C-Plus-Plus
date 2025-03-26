// link : https://codeforces.com/problemset/problem/1987/B
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
    vector<ll> diff_arr;

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll mx = arr[0];

    for (ll i = 1; i < n; i++)
    {
        if (arr[i] >= mx)
        {
            mx = arr[i];
            continue;
        }

        diff_arr.push_back(mx - arr[i]);
    }

    if (diff_arr.size() <= 0)
    {
        cout << 0 << endl;
        return;
    }

    // sort diff_arr
    sort(diff_arr.begin(), diff_arr.end(), [](ll a, ll b)
         { return a < b; });

    ll cost = diff_arr.size() + 1;
    ll ans = diff_arr[0] * cost;
    cost--;
    for (ll i = 1; i < diff_arr.size(); i++)
    {
        ll left = diff_arr[i] - diff_arr[i - 1];
        ans += (left * cost--);
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