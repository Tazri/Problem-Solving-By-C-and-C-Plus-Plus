// link : https://codeforces.com/problemset/problem/1829/C
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
    int leftmn = -1;
    int rightmn = -1;
    int bothmn = -1;

    for (int i = 0; i < n; i++)
    {
        int time;
        string p;
        cin >> time >> p;

        if (p == "11")
        {
            if (bothmn == -1)
                bothmn = time;
            bothmn = min(bothmn, time);
        }
        else if (p == "01")
        {
            if (rightmn == -1)
                rightmn = time;
            rightmn = min(rightmn, time);
        }
        else if (p == "10")
        {
            if (leftmn == -1)
                leftmn = time;
            leftmn = min(leftmn, time);
        }
    }

    if (bothmn == -1)
    {
        if (leftmn == -1 || rightmn == -1)
        {
            cout << -1 << endl;
            return;
        }

        cout << leftmn + rightmn << endl;
        return;
    }

    if (leftmn == -1 || rightmn == -1)
    {
        cout << bothmn << endl;
        return;
    }

    cout << min(bothmn, leftmn + rightmn) << endl;
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