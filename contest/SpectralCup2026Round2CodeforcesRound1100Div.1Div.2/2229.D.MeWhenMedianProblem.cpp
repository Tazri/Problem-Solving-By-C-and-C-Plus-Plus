// link : https://codeforces.com/contest/2229/problem/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool check(vector<int> a, vector<int> b, int x)
{
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x)
            a[i] = 1;
        else
            a[i] = 0;

        if (b[i] >= x)
            b[i] = 1;
        else
            b[i] = 0;
    }

    int zero = 0;
    int two = 0;
    vector<int> cv(n);
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;

        if (a[i])
            cnt++;
        if (b[i])
            cnt++;

        cv[i] = cnt;
    }

    vector<int> filter;
    filter.reserve(n);
    filter.push_back(cv[0]);

    for (int i = 1; i < n; i++)
    {
        if (cv[i] == 1)
            continue;

        if (filter.back() == 0 && cv[i] == 0)
            continue;
        filter.push_back(cv[i]);
    }

    for (int fi : filter)
        if (fi == 2)
            two++;
        else if (fi == 0)
            zero++;

    return two > zero;
}

int takemn(vector<int> &v)
{
    return *min_element(v.begin(), v.end());
}

int takemx(vector<int> &v)
{
    return *max_element(v.begin(), v.end());
}

void _DIBBA(int _DIBBA_NO)
{
    int n;

    cin >> n;
    vector<int> a = vector<int>(n);
    vector<int> b = vector<int>(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int left = 1;
    int right = 2 * n;

    int time = 0;

    int ans = left;

    while (left <= right)
    {

        int mid = left + (right - left) / 2;

        if (check(a, b, mid))
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans << endl;
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