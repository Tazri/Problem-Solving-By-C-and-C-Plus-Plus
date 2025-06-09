// link : https://codeforces.com/problemset/problem/2014/C
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

ll calHalf(ll sum, ll n)
{
    return (sum + (2 * n) - 1) / (2 * n);
}

void program()
{
    ll n;
    cin >> n;
    ll sum = 0;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (n <= 2)
    {
        cout << -1 << endl;
        return;
    }

    sort(arr.begin(), arr.end());

    ll mid = (n / 2) + 1;
    ll target = arr[mid - 1];
    ll h = calHalf(sum, n);
    ll add = 2 * n;

    if (target < h)
    {
        cout << 0 << endl;
        return;
    }

    ll need = 0;
    if (sum % add != 0)
    {
        ll r = add - (sum % add);
        sum += r;
        need += r;
    }
    h = calHalf(sum, n);

    if (target < h)
    {
        cout << need << endl;
        return;
    }

    ll t = target - h;

    ll extra = t * 2 * n;

    sum += extra;
    need += extra;
    sum += 1;
    need += 1;
    h = calHalf(sum, n);

    cout << need << endl;
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