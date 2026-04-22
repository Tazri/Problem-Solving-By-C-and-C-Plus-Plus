// link : https://codeforces.com/problemset/problem/508/B
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

    int f = (int)s.back() - (int)'0';

    bool evFound = false;
    for (char ch : s)
        if (((int)ch - (int)'0') % 2 == 0)
        {
            evFound = true;
            break;
        }

    if (!evFound)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < s.size(); i++)
    {
        int curr = (int)s[i] - (int)'0';

        if (curr & 1)
            continue;

        if (curr < f)
        {
            swap(s[i], s[s.size() - 1]);
            cout << s << endl;
            return;
        }
    }

    for (int i = s.size() - 1; i >= 0; i--)
    {
        int curr = (int)s[i] - (int)'0';

        if (curr & 1)
            continue;

        swap(s[i], s[s.size() - 1]);
        cout << s << endl;
        return;
    }
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