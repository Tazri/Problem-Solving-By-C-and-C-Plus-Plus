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
    ll n, c;
    cin >> n >> c;
    vector<ll> arr(n);
    map<ll, ll> mp;

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    ll cnt = 0;

    for (ll ai : arr)
    {
        ll b = ai - c;

        if (b >= 0 && mp.count(b))
        {
            cnt += mp[b];
        }

        mp[ai]++;
    }
    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}