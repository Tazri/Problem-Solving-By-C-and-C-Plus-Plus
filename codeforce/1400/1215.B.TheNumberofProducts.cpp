// link : https://codeforces.com/problemset/problem/1215/B
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
    int n;
    cin >> n;

    int negpr = 0;
    int pospr = 0;
    int negstk = 0;
    int posstk = 0;

    int currstk = 0;

    for (int i = 0; i < n; i++)
    {
        int vi;

        cin >> vi;
        currstk++;

        if (vi < 0)
        {
            posstk += currstk;
            currstk = 0;
            swap(posstk, negstk);
            pospr += posstk;
            negpr += negstk;

            continue;
        }

        pospr += (posstk + currstk);
        negpr += negstk;
    }

    cout << negpr << " " << pospr << endl;
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