// link : https://codeforces.com/contest/1029/problem/A
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

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> d;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;

        d.push_back(i);
        int d1 = n / i;

        if (d1 == i || d1 == n)
            continue;
        d.push_back(d1);
    }

    sort(d.begin(), d.end());
    for (int di : d)
    {
        string prefix;

        for (int i = 0; i < di; i++)
            prefix.push_back(s[i]);
        string construct;
        for (int i = 0; i < n / di; i++)
            construct += prefix;

        if (s == construct)
        {
            k--;
            string ans = s;
            while (k--)
                ans += prefix;
            cout << ans << endl;
            return;
        }
    }

    int fi = -1;
    for (int i = 1; i < n; i++)
    {
        bool isAllequal = true;
        for (int j = i, k = 0; j < n; j++, k++)
        {
            if (s[j] != s[k])
            {
                isAllequal = false;
                break;
            }
        }

        if (isAllequal)
        {

            int len = n - 1 - i + 1;
            fi = len - 1;
            break;
        }
    }

    string suff;

    for (int i = fi + 1; i < n; i++)
        suff.push_back(s[i]);

    k--;
    while (k--)
        s += suff;
    cout << s << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}