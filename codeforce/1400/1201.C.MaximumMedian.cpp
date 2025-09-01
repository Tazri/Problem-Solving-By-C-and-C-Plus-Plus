// link : https://codeforces.com/problemset/problem/1201/C
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
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (ll &ai : arr)
    {
        cin >> ai;
    }

    sort(arr.begin(), arr.end());
    ll mi = n / 2;
    ll l = arr[mi];
    ll r = arr[mi] + k;
    ll ans = arr[mi];

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        ll op = 0;
        for (ll i = mi; i < arr.size(); i++)
        {
            if (arr[i] < mid)
                op += mid - arr[i];
        }

        if (op <= k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}