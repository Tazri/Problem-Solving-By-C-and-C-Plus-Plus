// link : https://qoj.ac/problem/14089
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

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    string s, t;
    cin >> s;
    cin >> t;

    vector<int> suffmn(n, -1);
    vector<int> suffmx(n, -1);
    for (int i = 0; i < n; i++)
    {
        if (s[i] < t[i])
            suffmn[i] = i;
        else if (s[i] > t[i])
            suffmx[i] = i;
    }

    for (int i = n - 2; i >= 0; i--)
    {
        if (suffmn[i] == -1)
        {
            suffmn[i] = suffmn[i + 1];
        }

        if (suffmx[i] == -1)
            suffmx[i] = suffmx[i + 1];
    }

     int li = n - 1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] < t[i])
        {
            ans += (li - i + 1);
            continue;
        }
        else if (s[i] > t[i])
            continue;

        if (suffmn[i] == -1)
            continue;

        if (suffmx[i] == -1 || (suffmn[i] < suffmx[i]))
        {
            int ni = suffmn[i];
            ans += (li - ni + 1);
        }
    }

    cout << ans << endl;
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