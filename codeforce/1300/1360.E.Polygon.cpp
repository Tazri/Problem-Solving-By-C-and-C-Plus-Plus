// link : https://codeforces.com/problemset/problem/1360/E
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<int> di = {1, 0};
vector<int> dj = {0, 1};

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<string> matrix(n + 2, string(n + 2, '0'));

    for (int i = 1; i <= n; i++)
    {
        matrix[i][n + 1] = '1';
        matrix[n + 1][i] = '1';
    }

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            matrix[i + 1][j + 1] = s[j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (matrix[i][j] == '0')
                continue;
            bool found = false;
            for (int d = 0; d < 2; d++)
            {
                int ti = i + di[d];
                int tj = j + dj[d];

                if (matrix[ti][tj] == '1')
                {
                    found = true;
                }
            }

            if (found)
                continue;

            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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