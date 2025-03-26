// link : https://atcoder.jp/contests/abc331/tasks/abc331_c?lang=en
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

int main()
{
    optimize();
    ll n;
    cin >> n;
    vector<ll> mp(1e6 + 123, 0);
    vector<ll> arr(n);
    vector<ll> unique;
    vector<ll> ans(1e6 + 123, 0);
    ll ui = 0;

    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (mp[arr[i]] <= 0)
        {
            unique.push_back(arr[i]);
        }

        mp[arr[i]]++;
        sum += arr[i];
    }

    // sort unique
    sort(unique.begin(), unique.end(), [](ll a, ll b)
         { return a < b; });

    for (ll num : unique)
    {
        ll times = mp[num];
        sum -= (times * num);
        ans[num] = sum;
    }

    cout << ans[arr[0]];

    for (int i = 1; i < n; i++)
    {
        cout << " " << ans[arr[i]];
    }
    cout << endl;

    return 0;
}