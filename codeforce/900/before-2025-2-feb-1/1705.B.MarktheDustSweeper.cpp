// link : https://codeforces.com/problemset/problem/1705/B
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
    ll last = n - 1;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll i = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            break;
        }
    }

    if (i == last)
    {
        cout << 0 << endl;
        return;
    }

    ll ans = 0;

    for (; i < last; i++)
    {
        if (arr[i] == 0)
            ans++;
        else
            ans += arr[i];
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