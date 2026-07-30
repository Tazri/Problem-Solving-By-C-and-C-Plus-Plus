#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<int> di = {0, 1, 0, -1};
vector<int> dj = {1, 0, -1, 0};

void _DIBBA(int _DIBBA_NO)
{
    int m, n;
    cin >> m;
    n = 2;

    vector<string> table(n);

    for (int i = 0; i < n; i++)
        cin >> table[i];
    int cnt = 0;
    int j = 0;
    while (j < m)
    {
        if (j == m - 1)
        {
            if (table[0][j] == table[1][j])
            {
                j++;
                continue;
            }
            cnt++;
            j++;
            continue;
        }

        if (table[0][j] == table[1][j])
        {
            j++;
            continue;
        }

        if (table[0][j] == table[0][j + 1] && table[1][j] == table[1][j + 1])
        {
            j += 2;
            continue;
        }

        cnt++;
        j++;
    }
    cout << cnt << endl;
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