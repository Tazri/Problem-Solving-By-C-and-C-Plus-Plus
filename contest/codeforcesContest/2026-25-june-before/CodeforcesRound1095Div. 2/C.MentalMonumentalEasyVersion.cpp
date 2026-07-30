#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool can(vector<int> &v, int p)
{
    int n = v.size();
    vector<bool> possible(p + 1, false);

    vector<int> left;
    left.reserve(n);

    for (int vi : v)
    {
        if (vi > p || possible[vi])
            left.push_back(vi);
        else
        {
            possible[vi] = true;
        }
    }

    for (int i = 0; i <= p && left.size() > 0; i++)
    {
        if (possible[i])
            continue;

        while (left.size() > 0 && left.back() - i <= i)
            left.pop_back();

        if (left.size() <= 0)
            break;

        possible[i] = true;
        left.pop_back();
    }

    for (bool pi : possible)
        if (!pi)
            return false;
    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int left = 0;
    int right = n - 1;
    int p = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (can(v, mid))
        {
            p = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << p + 1 << endl;
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