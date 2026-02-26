// link : https://codeforces.com/problemset/problem/275/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

vector<int> di = {0, 0, +1, -1};
vector<int> dj = {+1, -1, 0, 0};

void program()
{
    int n = 3;
    vector<vector<int>> grid(n, vector<int>(n));
    vector<vector<int>> flip(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            int f = grid[i][j];
            for (int d = 0; d < 4; d++)
            {
                int ti = i + di[d];
                int tj = j + dj[d];

                if (0 <= ti && ti < n && 0 <= tj && tj < n)
                    f += grid[ti][tj];
            }

            flip[i][j] = f;
        }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (flip[i][j] & 1)
                flip[i][j] = 0;
            else
                flip[i][j] = 1;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
            cout << flip[i][j];
        cout << endl;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}