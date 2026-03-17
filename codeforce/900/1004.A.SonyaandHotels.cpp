// link : https://codeforces.com/problemset/problem/1004/A
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
    int n, d;
    cin >> n >> d;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        int point1 = v[i - 1] + d;
        int point2 = v[i] - d;

        if (v[i] - point1 >= d)
            cnt++;

        if (point1 == point2)
            continue;
        if (point2 - v[i - 1] >= d)
            cnt++;
    }

    cnt += 2;

    cout << cnt << endl;
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