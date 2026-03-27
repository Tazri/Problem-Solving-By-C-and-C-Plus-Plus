// link : https://codeforces.com/contest/2153/problem/C
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

bool fc(int a, int b, int c)
{
    return (a + b) > c && (a + c) > b && (b + c) > a;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    vector<int> d;
    int sum = 0;
    int add = 0;
    for (pair<int, int> p : mp)
    {
        int time = p.second;

        if (time % 2 == 0)
        {
            sum += time * p.first;
            add += time;
            continue;
        }

        sum += (time - 1) * p.first;
        add += time - 1;
        d.push_back(p.first);
    }

    if (sum == 0)
    {
        cout << 0 << endl;
        return;
    }

    if (d.size() == 0)
    {
        if (add <= 2)
            cout << 0 << endl;
        else
            cout << sum << endl;

        return;
    }

    int mx = sum;
    bool can = false;
    for (int i = 0; i < d.size(); i++)
    {
        if (d[i] < sum)
        {
            mx = max(mx, sum + d[i]);
            can = true;
        }
    }

    sort(d.rbegin(), d.rend());

    for (int i = 1; i < d.size(); i++)
    {
        if (d[i] + sum > d[i - 1] && d[i - 1] + sum > d[i])
        {
            can = true;
            mx = max(mx, sum + d[i] + d[i - 1]);
        }
    }

    if (can)
        cout << mx << endl;
    else
    {
        if (add <= 2)
            cout << 0 << endl;
        else
            cout << sum << endl;
    }
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