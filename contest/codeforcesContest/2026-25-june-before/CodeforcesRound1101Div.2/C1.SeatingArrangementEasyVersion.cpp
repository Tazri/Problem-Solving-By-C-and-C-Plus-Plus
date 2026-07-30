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

string str;
int n;
int x;
int st;
map<vector<int>, int> mp;

int solve(int i, int left, int curr, int total)
{
    if (i >= n)
    {
        return total;
    }

    vector<int> key = {i, left, curr};
    if (mp.count(key))
    {
        return mp[key];
    }

    if (str[i] == 'I')
    {
        vector<int> vr;
        int res1 = solve(i + 1, left, curr, total);
        vr.push_back(res1);

        if (left > 0)
        {
            int res2 = solve(i + 1, left - 1, curr + st - 1, total + 1);
            vr.push_back(res2);
        }

        mp[key] = *max_element(vr.begin(), vr.end());
        return mp[key];
    }

    if (str[i] == 'A')
    {
        vector<int> vr;

        int res1 = solve(i + 1, left, curr, total);
        vr.push_back(res1);

        if (curr > 0)
        {
            int res2 = solve(i + 1, left, curr - 1, total + 1);
            vr.push_back(res2);
        }

        if (left > 0)
        {
            int res3 = solve(i + 1, left - 1, curr + st - 1, total + 1);
            vr.push_back(res3);
        }

        mp[key] = *max_element(vr.begin(), vr.end());
        return mp[key];
    }

    vector<int> vr;
    int res1 = solve(i + 1, left, curr, total);
    vr.push_back(res1);
    if (curr > 0)
    {
        int res2 = solve(i + 1, left, curr - 1, total + 1);
        vr.push_back(res2);
    }

    int res = *max_element(vr.begin(), vr.end());
    mp[key] = res;
    return res;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n >> x >> st;
    cin >> str;

    cout
        << solve(0, x, 0, 0) << endl;
    mp.clear();
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