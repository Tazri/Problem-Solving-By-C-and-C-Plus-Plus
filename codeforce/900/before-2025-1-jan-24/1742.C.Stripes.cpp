// link : https://codeforces.com/problemset/problem/1742/C
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

void test()
{
    vector<vector<char>> grid(8);

    for (int i = 0; i < 8; i++)
    {
        grid[i] = vector<char>(8, '.');
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> grid[i][j];
        }
    }

    // check it's blue or not
    for (int j = 0; j < 8; j++)
    {
        if (grid[0][j] == 'B')
        {
            bool isAllSame = true;
            for (int i = 0; i < 8; i++)
            {
                if (grid[i][j] != 'B')
                {
                    isAllSame = false;
                    break;
                }
            }

            if (isAllSame)
            {
                cout << 'B' << endl;
                return;
            }
        }
    }

    // now check R
    for (int i = 0; i < 8; i++)
    {
        if (grid[i][0] == 'R')
        {
            bool isAllSame = true;

            for (int j = 0; j < 8; j++)
            {
                if (grid[i][j] != 'R')
                {
                    isAllSame = false;
                    break;
                }
            }

            if (isAllSame)
            {
                cout << 'R' << endl;
                return;
            }
        }
    }

    cout << '.' << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}