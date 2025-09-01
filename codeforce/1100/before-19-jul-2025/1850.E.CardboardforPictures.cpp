// link : https://codeforces.com/problemset/problem/1850/E
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

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll l = 1;
    ll r = sqrt(c);

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        ll sum = 0;

        for (ll ai : arr)
        {
            if (sum > c)
                break;

            ll side = ai + (2 * mid);
            sum += (side * side);
        }

        if (sum == c)
        {
            cout << mid << endl;
            return;
        }

        if (sum < c)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << -1 << endl;
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