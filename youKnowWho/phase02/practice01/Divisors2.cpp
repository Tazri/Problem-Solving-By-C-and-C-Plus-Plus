// link : https://www.spoj.com/problems/DIV2/en/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int N = 1e6;

void _DIBBA(int _DIBBA_NO)
{
    vector<int> nod(N + 1);

    for (int i = 1; i <= N; i++)
        for (int j = i; j <= N; j += i)
            nod[j] += 1;

    vector<int> ans;
    ans.push_back(0);
    vector<bool> mark(N + 1, true);

    for (int m = 1; m <= N; m++)
    {
        for (int n = m; n <= N; n += m)
        {
            if (nod[n] % nod[m] != 0)
                mark[n] = false;
        }
    }

    for (int i = 1; i <= N; i++)
        if (mark[i] && nod[i] > 3)
            ans.push_back(i);

    for (int i = 108; i < ans.size(); i += 108)
        cout << ans[i] << endl;
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