#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int take(char demand, string &s)
{

    int cnt = 0;
    int zero = 0;
    int one = 0;
    for (char ch : s)
    {
        if (demand == ch)
        {
            demand = demand == '0' ? '1' : '0';
        }
        else
        {
            cnt++;
            if (ch == '0')
                zero++;
            else
                one++;
        }
    }

    if (abs(zero - one) <= 1)
        return cnt;

    char last = demand == '0' ? '1' : '0';

    if (last == '0' && abs((zero + 1) - one) <= 1)
        return cnt + 1;
    else if (last == '1' && abs(zero - (one + 1)) <= 1)
        return cnt + 1;

    return -1;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int res1 = take('0', s);
    int res2 = take('1', s);

    if (res1 == -1 && res2 == -1)
    {
        cout << -1 << endl;
    }
    else if (res1 != -1 && res2 != -1)
    {
        cout << min(res1, res2) << endl;
    }
    else
    {
        cout << (res1 == -1 ? res2 : res1) << endl;
    }
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