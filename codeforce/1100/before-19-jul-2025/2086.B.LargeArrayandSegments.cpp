// link : https://codeforces.com/problemset/problem/2086/B
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
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> arr(n);
    ll sum = 0;
    ll total = n * k;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum >= x)
    {
        sum = 0;
        ll cnt = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            sum += arr[i];
            if (sum >= x)
                break;
            cnt++;
        }
        total -= cnt;
        cout << total << endl;
        return;
    }
    ll s = sum;
    sum = 0;
    ll cnt = 0;

    ll t = x / s;
    if (x % s == 0)
        t--;
    sum = t * s;
    cnt = t * n;

    for (ll i = n - 1; i >= 0; i--)
    {
        sum += arr[i];

        if (sum >= x)
            break;
        cnt++;
    }

    total = total - cnt;

    if (total <= 0)
        cout << 0 << endl;
    else
        cout << total << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}