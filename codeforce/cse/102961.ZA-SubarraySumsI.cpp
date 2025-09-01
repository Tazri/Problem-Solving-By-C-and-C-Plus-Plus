// link : https://codeforces.com/gym/102961/problem/ZA
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
    ll n, x;
    cin >> n >> x;

    vector<ll> arr(n + 1);

    for (ll i = 1; i <= n; i++)
        cin >> arr[i];

    for (ll i = 1; i <= n; i++)
        arr[i] += arr[i - 1];

    map<ll, ll> mp;
    ll cnt = 0;
    for (ll r = 0; r <= n; r++)
    {
        ll lmx = arr[r] - x;

        if (mp[lmx])
        {
            cnt += mp[lmx];
        }

        mp[arr[r]]++;
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}