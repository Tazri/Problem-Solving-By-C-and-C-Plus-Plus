// link : https://atcoder.jp/contests/abc267/tasks/abc267_c?lang=en
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
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n + 1);
    vector<ll> pre(n + 1);

    for (ll i = 1; i <= n; i++)
        cin >> arr[i];

    for (ll i = 1; i <= n; i++)
        pre[i] = arr[i] + pre[i - 1];

    ll ans = 0;
    for (ll i = 1; i <= m; i++)
        ans += (arr[i] * i);

    ll mx = ans;

    ll l = 1;
    for (ll r = m + 1; r <= n; r++)
    {
        ll right = r - 1;
        ll left = l + 1;
        ll midSum = 0;
        if (left <= right)
            midSum = pre[right] - pre[left - 1];

        ans -= arr[l];
        l++;
        ans -= midSum;
        ans += (m * arr[r]);

        mx = max(mx, ans);
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}