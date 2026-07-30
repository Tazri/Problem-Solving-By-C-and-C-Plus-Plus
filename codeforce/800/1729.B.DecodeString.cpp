// link : https://codeforces.com/problemset/problem/1729/B
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
    string s;
    cin >> n;
    cin >> s;

    vector<int> v;

    int i = 0;
    while (i < n)
    {
        if (s[i] != '0')
        {
            v.push_back(s[i] - '0');
            i++;
            continue;
        }

        if (i == n - 1)
        {
            int f2 = v.back();
            v.pop_back();
            int f1 = v.back();
            v.pop_back();
            int d = (f1 * 10) + f2;
            v.push_back(d);
            i++;
            continue;
        }

        if (s[i + 1] == '0')
        {
            v.push_back(s[i] - '0');
            i++;
            continue;
        }
        int f2 = v.back();
        v.pop_back();
        int f1 = v.back();
        v.pop_back();
        int d = (f1 * 10) + f2;
        v.push_back(d);
        i++;
    }

    string ans;

    for (int vi : v)
    {
        ans.push_back('a' + (vi - 1));
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