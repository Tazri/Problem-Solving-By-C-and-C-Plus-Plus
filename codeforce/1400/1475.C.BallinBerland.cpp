// link : https://codeforces.com/problemset/problem/1475/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

void _DIBBA(int _DIBBA_NO)
{
    int a, b, k;
    cin >> a >> b >> k;
    vector<int> va(k);
    vector<int> vb(k);

    map<int, map<int, int>> prcnt;
    map<int, int> leftmp;
    map<int, int> rightmp;

    for (int i = 0; i < k; i++)
        cin >> va[i];
    for (int i = 0; i < k; i++)
        cin >> vb[i];

    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        int ai = va[i];
        int bi = vb[i];

        int total = i;
        int aibi = prcnt[ai][bi];
        int cntleft = leftmp[ai] - aibi;
        int cntright = rightmp[bi] - aibi;
        int add = total - aibi - cntleft - cntright;

        ans += add;
        prcnt[ai][bi]++;
        leftmp[ai]++;
        rightmp[bi]++;
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