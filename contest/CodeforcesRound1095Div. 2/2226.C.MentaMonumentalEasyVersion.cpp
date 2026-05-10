// link : https://codeforces.com/contest/2226/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool check(vector<int> &v, int p)
{
    multiset<int> mt;

    for (int vi : v)
        mt.insert(vi);

    for (int x = p; x >= 0; x--)
    {
        if (mt.count(x))
        {
            mt.erase(mt.find(x));
            continue;
        }

        multiset<int>::iterator it = mt.upper_bound(2 * x);

        if (it == mt.end())
        {
            return false;
        }

        mt.erase(it);
    }

    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int left = 0;
    int right = n - 1;
    int mex = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (check(v, mid))
        {
            mex = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << mex + 1 << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}