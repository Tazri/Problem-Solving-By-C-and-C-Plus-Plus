// link : https://codeforces.com/problemset/problem/1006/C
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
    ll n;
    cin >> n;
    vector<ll> v(n + 1);

    for (ll i = 1; i <= n; i++)
        cin >> v[i];

    ll mx = 0;
    ll sum1 = 0;
    ll sum3 = 0;

    ll l = 1;
    ll r = n;
    while (l < r)
    {
        if (sum1 == sum3)
        {
            mx = max(sum1, mx);
            sum1 += v[l];
            sum3 += v[r];
            l++;
            r--;
            continue;
        }

        if (sum1 > sum3)
        {
            sum3 += v[r];
            r--;
        }
        else
        {
            sum1 += v[l];
            l++;
        }
    }
    if (sum1 == sum3)
    {
        mx = max(mx, sum1);
    }

    if (l == r)
    {
        if (sum1 < sum3)
            sum1 += v[l];
        else
            sum3 += v[r];

        if (sum1 == sum3)
            mx = max(mx, sum1);
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}