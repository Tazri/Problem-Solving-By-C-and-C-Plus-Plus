// link : https://codeforces.com/problemset/problem/1709/A
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
    int x;
    cin >> x;
    vector<int> grph(4);
    for (int i = 1; i <= 3; i++)
        cin >> grph[i];

    vector<bool> vis(4, false);

    int rt = x;
    vis[rt] = true;
    while (grph[rt] != 0)
    {
        rt = grph[rt];
        vis[rt] = true;
    }

    bool ok = vis[1] && vis[2] && vis[3];

    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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