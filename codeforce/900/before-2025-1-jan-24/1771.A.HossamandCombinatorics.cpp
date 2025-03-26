// link : https://codeforces.com/problemset/problem/1771/A
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

void test()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll mn = arr[0];
    ll mx = arr[0];

    for (ll i = 0; i < n; i++)
    {
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }

    // count
    ll mxCount = 0;
    ll mnCount = 0;

    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == mn)
            mnCount++;
        if (arr[i] == mx)
            mxCount++;
    }

    ll ans;

    if (mx == mn)
    {
        ans = (n * (n - 1));
    }
    else
    {
        ans = (mxCount * 2) * mnCount;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}