// link : https://codeforces.com/problemset/problem/1285/B
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

ll getmxSum(vector<ll> v)
{
    ll n = v.size();
    vector<ll> pre(n + 1, 0);
    for (ll i = 0; i < n; i++)
        pre[i + 1] = v[i];

    for (ll i = 1; i <= n; i++)
        pre[i] += pre[i - 1];

    ll lm1 = 0;
    ll mxSum = 0;
    for (ll r = 1; r <= n; r++)
    {
        ll sum = pre[r] - lm1;
        mxSum = max(sum, mxSum);
        lm1 = min(lm1, pre[r]);
    }

    return mxSum;
}

void program()
{
    ll n;
    cin >> n;
    vector<ll> v1, v2;
    v1.reserve(n);
    v2.reserve(n);
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll v;
        cin >> v;
        sum += v;
        if (i == 1)
            v1.push_back(v);
        else if (i == n)
            v2.push_back(v);
        else
        {
            v1.push_back(v);
            v2.push_back(v);
        }
    }

    ll mxSum = max(getmxSum(v1), getmxSum(v2));

    if (sum > mxSum)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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