// link : https://codeforces.com/contest/2242/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool f1(vector<int> v)
{
    int n = v.size();
    int cnt = 0;
    int fi = -1;
    for (int i = 0; i < n - 2; i++)
    {
        if (v[i] == 1)
            cnt++;

        if (cnt == (i + 1 - cnt))
        {
            fi = i;
            break;
        }
    }

    if (fi == -1)
    {
        return false;
    }

    int mi = -1;
    cnt = 0;
    for (int i = fi + 1; i < n - 1; i++)
    {
        if (v[i] == 1 || v[i] == 2)
            cnt++;

        if (cnt >= (i - fi - cnt))
        {
            mi = i;
            break;
        }
    }

    if (mi == -1)
    {
        return false;
    }

    return true;
}

bool f2(vector<int> v)
{
    int n = v.size();
    int cnt = 0;
    int fi = -1;
    for (int i = 0; i < n - 2; i++)
    {
        if (v[i] == 1)
            cnt++;

        if (cnt > (i + 1 - cnt))
        {
            fi = i;
            break;
        }
    }

    if (fi == -1)
    {
        return false;
    }

    int mi = -1;
    cnt = 0;
    for (int i = fi + 1; i < n - 1; i++)
    {
        if (v[i] == 1 || v[i] == 2)
            cnt++;

        if (cnt >= (i - fi - cnt))
        {
            mi = i;
            break;
        }
    }

    if (mi == -1)
    {
        return false;
    }

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

    if (f1(v) || f2(v))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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