// link : https://codeforces.com/contest/1323/problem/B
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

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

vector<int> compress(vector<int> &v)
{
    vector<int> ans;
    int len = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            len++;
        else
        {
            if (v[i - 1] == 1)
                ans.push_back(len);
            len = 1;
        }
    }

    if (v.back() == 1)
        ans.push_back(len);
    return ans;
}

int fcnt(vector<int> &a, vector<int> &b, int n, int m)
{
    int asum = 0;
    int bsum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int cnt = max(a[i] - n + 1, 0LL);
        asum += cnt;
    }

    for (int i = 0; i < b.size(); i++)
    {
        int cnt = max(b[i] - m + 1, 0LL);
        bsum += cnt;
    }

    return asum * bsum;
}

void _DIBBA()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    a = compress(a);
    b = compress(b);
    n = a.size();
    m = b.size();

    // for(int ai:a)cout<< ai << " ";cout <<endl;
    // for(int ai:b)cout<< ai << " ";cout <<endl;

    int ans = 0;
    for (int i = 1; i * i <= k; i++)
    {
        if (k % i != 0)
            continue;

        int h = i;
        int w = (k / i);

        ans += fcnt(a, b, h, w);

        if (h != w)
            ans += fcnt(a, b, w, h);
    }

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    while (t--)
        _DIBBA();
    return 0;
}