// link : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
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
    ll n, s;
    cin >> n >> s;

    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    ll l = 0;
    ll r = 0;
    ll sum = 0;
    ll mx = 0;

    for (int l = 0; l < n; l++)
    {
        if (l == r && v[r] > s)
        {
            r++;
            continue;
        }

        while (r < n && sum + v[r] <= s)
        {
            sum += v[r];
            r++;
        }

        ll len = (r - 1) - l + 1;
        mx = max(len, mx);

        sum -= v[l];
    }
    cout << mx << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}