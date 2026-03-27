// link : https://codeforces.com/problemset/problem/1392/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

int calCulate(vector<int> v, int x)
{
    int n = v.size();

    if (n == 0)
        return 0;

    int ans = 0;
    vector<int> stk;

    stk.push_back(v.back());
    v.pop_back();

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] >= stk.back())
        {
            ans += v[i] - stk.back();
            stk.pop_back();
            stk.push_back(v[i]);
        }
        else
        {
            stk.push_back(v[i]);
        }
    }

    int select = stk.back();
    stk.pop_back();

    while (stk.size() > 0)
    {
        ans += stk.back() - select;
        select = stk.back();
        stk.pop_back();
    }

    ans += x - select;

    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    stack<int> stk;
    int ans = 0;
    int l = 0;
    while (l < n)
    {
        if (l == 0)
        {
            stk.push(v[l]);
            l++;
            continue;
        }

        if (v[l] >= stk.top())
        {
            stk.push(v[l]);
            l++;
            continue;
        }

        vector<int> tmp;

        while (l < n && v[l] < stk.top())
        {
            tmp.push_back(v[l]);
            l++;
        }

        ans += calCulate(tmp, stk.top());
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