// link : https://atcoder.jp/contests/abc312/tasks/abc312_b?lang=en
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

int main()
{
    optimize();
    int n, m;
    cin >> n >> m;
    char arr[n][m];

    // take input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n - 8; i++)
    {
        for (int j = 0; j < m - 8; j++)
        {
            if (arr[i][j] == '.')
                continue;

            bool isTak = true;

            // check top left
            for (int k = 0; k < 3; k++)
            {
                if (!isTak)
                    break;
                for (int l = 0; l < 3; l++)
                {
                    if (arr[i + k][j + l] != '#')
                    {
                        isTak = false;
                        break;
                    }
                }
            }

            for (int k = 0; k < 4; k++)
            {
                if (arr[i + k][j + 3] != '.')
                {
                    isTak = false;
                    break;
                }
            }

            for (int k = 0; k < 4; k++)
            {
                if (arr[i + 3][j + k] != '.')
                {
                    isTak = false;
                    break;
                }
            }

            // now check bottom right
            int ci = i + 8; // corner i
            int cj = j + 8; // corner j
            if (ci >= n || cj >= m)
                continue;

            for (int k = 0; k < 3; k++)
            {
                if (!isTak)
                    break;
                for (int l = 0; l < 3; l++)
                {
                    if (arr[ci - k][cj - l] != '#')
                    {
                        isTak = false;
                        break;
                    }
                }
            }

            for (int k = 0; k < 4; k++)
            {
                if (!isTak)
                    break;
                if (arr[ci - k][cj - 3] != '.')
                {
                    isTak = false;
                    break;
                }
            }

            for (int k = 0; k < 4; k++)
            {
                if (!isTak)
                    break;
                if (arr[ci - 3][cj - k] != '.')
                {
                    isTak = false;
                    break;
                }
            }

            if (isTak)
            {
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
    return 0;
}