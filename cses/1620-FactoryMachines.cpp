// link : https://cses.fi/problemset/task/1620
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

ll cntFn(vector<ll> arr, ll sec)
{
    ll cnt = 0;
    for (ll ai : arr)
    {
        ll c = sec / ai;
        cnt += c;
    }
    return cnt;
}

void program()
{
    ll n, t;
    cin >> n >> t;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll mx = *min_element(arr.begin(), arr.end());
    ll l = 1;
    ll r = mx * t;
    ll ans = -1;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll cnt = cntFn(arr, mid);

        if (cnt >= t)
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
    program();
    return 0;
}