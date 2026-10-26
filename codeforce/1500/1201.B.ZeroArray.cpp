// link : https://codeforces.com/contest/1201/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

bool allEqual(vector<int> &v)
{
    int n = v.size();

    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[i - 1])
            return false;
    }

    return true;
}

void _DIBBA()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    if (sum & 1)
    {
        cout << "NO" << endl;
        return;
    }

    if (allEqual(v))
    {
        cout << "YES" << endl;
        return;
    }
    int k = sum / 2;

    for (int vi : v)
    {
        if (vi > k)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    while (t--)
        _DIBBA();
    0;
}