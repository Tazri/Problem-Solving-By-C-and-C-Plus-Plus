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
    vector<int> v6;
    v6.reserve(n);
    vector<int> v3;
    v3.reserve(n);
    vector<int> v2;
    v2.reserve(n);
    vector<int> v;
    v.reserve(n);

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (vi % 6 == 0)
            v6.push_back(vi);
        else if (vi % 2 == 0)
            v2.push_back(vi);
        else if (vi % 3 == 0)
            v3.push_back(vi);
        else
            v.push_back(vi);
    }

    vector<int> ans;
    ans.reserve(n);

    for (int vi : v2)
        ans.push_back(vi);
    for (int vi : v)
        ans.push_back(vi);

    for (int vi : v3)
        ans.push_back(vi);

    for (int vi : v6)
        ans.push_back(vi);

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