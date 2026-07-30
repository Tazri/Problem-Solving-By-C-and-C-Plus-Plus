// link : https://codeforces.com/contest/2209/problem/C
#include <bits/stdc++.h>

using namespace std;

bool query(int i, int j)
{
    cout << "? " << i << " " << j << endl;
    int ans;
    cin >> ans;

    if (ans)
    {
        cout << "! " << i << endl;
        return true;
    }

    return false;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    for (int i = 2 * n; i > 4; i -= 2)
    {
        if (query(i, i - 1))
            return;
    }

    if (query(1, 2) || query(1, 3) || query(2, 3))
        return;
    cout << "! " << 4 << endl;
}

int32_t main()
{

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}