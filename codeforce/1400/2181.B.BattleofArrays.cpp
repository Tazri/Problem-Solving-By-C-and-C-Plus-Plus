// link : https://codeforces.com/problemset/problem/2181/B
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
    int n, m;
    cin >> n >> m;
    priority_queue<int> apq;
    priority_queue<int> bpq;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        apq.push(ai);
    }

    for (int i = 0; i < m; i++)
    {
        int bi;
        cin >> bi;
        bpq.push(bi);
    }

    bool aliceTurn = true;

    while (apq.size() > 0 && bpq.size() > 0)
    {
        if (aliceTurn)
        {
            int mx = apq.top();
            int bt = bpq.top();
            bpq.pop();
            bt = max(bt - mx, 0);
            if (bt)
                bpq.push(bt);
        }
        else
        {
            int mx = bpq.top();
            int at = apq.top();
            apq.pop();
            at = max(at - mx, 0);

            if (at)
                apq.push(at);
        }

        aliceTurn = !aliceTurn;
    }

    if (bpq.size() <= 0)
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;
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