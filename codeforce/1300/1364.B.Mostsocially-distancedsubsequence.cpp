// link : https://codeforces.com/problemset/problem/1364/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<bool> takes(n, true);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 1; i < n - 1; i++)
    {
        if ((v[i - 1] < v[i] && v[i] < v[i + 1]) || (v[i - 1] > v[i] && v[i] > v[i + 1]))
        {
            takes[i] = false;
        }
    }

    vector<int> ans;
    ans.reserve(n);

    for (int i = 0; i < n; i++)
    {
        if (takes[i])
            ans.push_back(v[i]);
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i == ans.size() - 1];
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