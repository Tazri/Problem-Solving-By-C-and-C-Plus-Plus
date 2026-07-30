// link : https://codeforces.com/problemset/problem/2114/D
#include <bits/stdc++.h>

using namespace std;
#define int ll
typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int calculate(multiset<int> &mti, multiset<int> &mtj, int n, bool check = false)
{
    int imx = *mti.rbegin();
    int imn = *mti.begin();
    int jmx = *mtj.rbegin();
    int jmn = *mtj.begin();

    int w = jmx - jmn + 1;
    int h = imx - imn + 1;

    if (h * w == n - 1)
        return min((h + 1) * w, (w + 1) * h);

    return h * w;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    multiset<int> mti;
    multiset<int> mtj;
    vector<pair<int, int>> v;
    vector<pair<int, int>> vi;
    vector<pair<int, int>> vj;

    for (int i = 0; i < n; i++)
    {
        pair<int, int> p;
        cin >> p.first >> p.second;
        v.push_back(p);
        mti.insert(p.first);
        mtj.insert(p.second);
        vi.push_back({p.first, i});
        vj.push_back({p.second, i});
    }

    if (n <= 2)
    {
        cout << n << endl;
        return;
    }

    sort(vi.begin(), vi.end());
    sort(vj.begin(), vj.end());

    int W = (vi.back()).first - (vi.front()).first + 1;
    int H = (vj.back()).first - (vj.front()).first + 1;

    int ans = W * H;

    vector<pair<int, int>> rmv;
    rmv.push_back(vi.front());
    rmv.push_back(vj.front());
    rmv.push_back(vi.back());
    rmv.push_back(vj.back());

    for (pair<int, int> p : rmv)
    {
        int index = p.second;
        int i = v[index].first;
        int j = v[index].second;

        mti.erase(mti.find(i));
        mtj.erase(mtj.find(j));

        int area;
        if (i == 4 && j == 4)
            area = calculate(mti, mtj, n, true);
        else
            area = calculate(mti, mtj, n);

        mti.insert(i);
        mtj.insert(j);
        ans = min(area, ans);
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