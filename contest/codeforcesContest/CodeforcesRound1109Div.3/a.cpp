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
    string s;
    cin >> s;

    int ans = 0;
    int len = 0;
    for (char ch : s)
    {
        if (ch == '*')
        {
            int take = (len + 1) / 2;
            ans = max(ans, take);
            len = 0;
        }
        else
            len++;
    }

    int take = (len + 1) / 2;
    ans = max(ans, take);
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