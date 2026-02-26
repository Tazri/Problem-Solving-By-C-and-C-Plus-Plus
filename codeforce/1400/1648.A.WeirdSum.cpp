// link : https://codeforces.com/problemset/problem/1648/a
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

#define int ll

int take(vector<int> &v)
{
    int n = v.size();
    sort(v.begin(), v.end());

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += v[i];

    int pre = 0;
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        pre += v[i];
        int right = sum - pre;
        int el = n - (i + 1);
        right -= (el * v[i]);
        ans += right;
    }

    return ans;
}

void program()
{
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> color(1e5 + 123);
    vector<int> v;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int c;
            cin >> c;

            if (color[c].size() == 0)
                v.push_back(c);

            color[c].push_back({i, j});
        }
    }

    // for (int ci : v)
    //     cout << ci << " ";
    // cout << endl;

    int ans = 0;

    for (int ci : v)
    {
        vector<int> vf;
        vf.reserve(color[ci].size());
        vector<int> vs;
        vs.reserve(color[ci].size());

        for (pair<int, int> p : color[ci])
        {
            vf.push_back(p.first);
            vs.push_back(p.second);
        }

        ans += take(vf) + take(vs);
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    int t;
    t = 1;
    while (t--)
        program();
    return 0;
}