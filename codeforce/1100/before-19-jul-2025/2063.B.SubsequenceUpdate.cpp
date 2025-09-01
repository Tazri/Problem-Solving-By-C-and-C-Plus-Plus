// link : https://codeforces.com/problemset/problem/2063/B
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
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> arr(n);
    vector<ll> left(r);
    vector<ll> right(n - l + 1);

    ll s1 = 0;
    ll li = l - 1;
    ll ri = r - 1;
    ll rj = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (i >= li && i <= ri)
        {
            s1 += arr[i];
        }

        if (i < r)
        {
            left[i] = arr[i];
        }

        if (i >= li && i < n)
        {
            right[rj] = arr[i];
            rj++;
        }
    }

    sort(right.begin(), right.end());
    sort(left.begin(), left.end());
    ll t = r - l + 1;
    ll s2 = 0;
    ll s3 = 0;

    for (ll i = 0; i < t; i++)
    {
        s2 += right[i];
        s3 += left[i];
    }

    ll ans = min(s1, min(s2, s3));
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