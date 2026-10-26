// link : https://codeforces.com/contest/2254/problem/D
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

bool allEqual(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
        if (v[i] != v[i - 1])
            return false;
    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    if (allEqual(v))
    {
        if (v.back() != 0)
        {
            cout << -1 << endl;
            return;
        }
    }

    vector<pair<int, int>> track;
    for (pair<int, int> p : mp)
        track.push_back(p);

    map<int, int> label;
    int prevMark = -1;

    if (track[0].first != 0)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 1; i < track.size(); i++)
    {
        int sum = track[i].first - track[i - 1].first;

        int tims = track[i - 1].second;

        if (sum % tims != 0)
        {
            cout << -1 << endl;
            return;
        }

        int mark = sum / tims;
        label[track[i - 1].first] = mark;

        if (prevMark == -1)
        {
            prevMark = mark;
        }
        else
        {
            if (prevMark >= mark)
            {
                cout << -1 << endl;
                return;
            }

            prevMark = mark;
        }
    }

    vector<int> ans(n, -1);

    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (label.count(v[i]))
        {
            ans[i] = label[v[i]];
            mx = max(mx, ans[i]);
        }
    }

    for (int i = 0; i < n; i++)
        if (ans[i] == -1)
            ans[i] = mx + 1;

    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
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