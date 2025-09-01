// link : https://codeforces.com/problemset/problem/1703/F
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

ll lb(vector<ll> &arr, ll x)
{
    if (arr.size() == 0)
        return -1;
    return lower_bound(arr.begin(), arr.end(), x) - arr.begin();
}

void program()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> indexes;
    indexes.reserve(n);

    for (ll &ai : arr)
        cin >> ai;

    ll cnt = 0;
    for (ll t = 0; t < n; t++)
    {
        ll i = t + 1;
        ll ai = arr[t];

        if (ai >= i)
            continue;

        if (indexes.empty())
        {
            indexes.push_back(i);
            continue;
        }

        ll l = lb(indexes, ai);
        cnt += l;
        indexes.push_back(i);
    }

    cout << cnt << endl;
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