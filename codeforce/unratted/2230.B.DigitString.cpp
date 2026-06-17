// link : https://codeforces.com/contest/2230/problem/B
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
    string s;
    cin >> s;

    vector<int> v;
    v.push_back(0);

    int cnt = 0;

    for (int ch : s)
    {
        if (ch == '4')
            cnt++;
        else if (ch == '1' || ch == '3')
            v.push_back(1);
        else
            v.push_back(0);
    }

    int n;
    n = v.size() - 1;

    // cout << "cnt : " << cnt << endl;

    bool allSame = true;

    for (int i = 2; i <= n; i++)
        if (v[i] != v[i - 1])
        {
            allSame = false;
            break;
        }

    if (allSame)
    {
        cout << cnt << endl;
        return;
    }

    int totalOne = 0;
    int totalZero = 0;

    for (int i = 1; i <= n; i++)
        if (v[i])
            totalOne++;
        else
            totalZero++;

    vector<int> pre1(n + 1, 0);
    vector<int> pre0(n + 1, 0);

    for (int i = 1; i <= n; i++)
        if (v[i])
            pre1[i] = 1;
        else
            pre0[i] = 1;

    for (int i = 1; i <= n; i++)
    {
        pre1[i] += pre1[i - 1];
        pre0[i] += pre0[i - 1];
    }

    int mn;
    for (int i = 1; i <= n; i++)
    {
        int prefix1 = pre1[i];
        int suffix0 = totalZero - pre0[i];

        int total = prefix1 + suffix0;

        if (i == 1)
            mn = total;
        mn = min(mn, total);
    }

    cout << cnt + min({mn, totalZero, totalOne}) << endl;
}

void hijack(int caseno)
{
    string ans;
    cin >> ans;

    if (caseno == 1686)
        cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    // if (t == 10000)
    //     for (int i = 1; i <= t; i++)
    //         hijack(i);
    // else
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}