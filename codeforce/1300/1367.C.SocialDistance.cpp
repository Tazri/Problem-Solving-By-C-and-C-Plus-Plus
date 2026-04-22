// link : https://codeforces.com/problemset/problem/1367/C
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

    vector<int> last(n, -1);

    int prev = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            prev = i;
            break;
        }
    }

    for (int i = prev - 1; i >= 0; i--)
    {
        last[i] = prev;

        if (s[i] == '1')
            prev = i;
    }

    // for (int li : last)
    //     cout << li << " ";
    // cout << endl;

    int cnt = 0;
    int lst = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            lst = i;
            continue;
        }

        if (lst == -1 && last[i] == -1)
        {
            s[i] = '1';
            lst = i;
            cnt++;
            continue;
        }

        if (lst == -1)
        {
            int d = last[i] - i;

            if (d > k)
            {
                s[i] = '1';
                cnt++;
                lst = i;
            }
            continue;
        }

        if (last[i] == -1)
        {
            int d = i - lst;

            if (d > k)
            {
                s[i] = '1';
                lst = i;
                cnt++;
            }
            continue;
        }

        int d1 = i - lst;
        int d2 = last[i] - i;

        if (d1 > k && d2 > k)
        {
            s[i] = '1';
            cnt++;
            lst = i;
        }
    }

    // cout << s << endl;
    cout << cnt << endl;
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