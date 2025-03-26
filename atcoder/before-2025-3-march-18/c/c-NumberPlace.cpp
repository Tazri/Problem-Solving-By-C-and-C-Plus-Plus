// link : https://atcoder.jp/contests/abc327/tasks/abc327_c?lang=en
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

#define ok() \
    cout << "Yes" << endl;
#define notOk()           \
    cout << "No" << endl; \
    return;

void program()
{
    int size = 9;
    vector<vector<int>> board(size);

    for (int i = 0; i < size; i++)
    {
        board[i] = vector<int>(size, 0);

        for (int j = 0; j < size; j++)
        {
            cin >> board[i][j];
        }
    }

    // row check
    for (int i = 0; i < size; i++)
    {
        vector<bool> mp(10, false);
        int left = 9;

        for (int j = 0; j < size; j++)
        {
            if (mp[board[i][j]])
            {
                notOk();
            }

            mp[board[i][j]] = true;
            left--;
        }

        if (left > 0)
        {
            notOk();
        }
    }

    // cols check
    for (int j = 0; j < size; j++)
    {
        vector<bool> mp(10, false);
        int left = 9;

        for (int i = 0; i < size; i++)
        {
            if (mp[board[i][j]])
            {
                notOk();
            }

            mp[board[i][j]] = true;
            left--;
        }

        if (left > 0)
        {
            notOk();
        }
    }

    // group check
    for (int si = 0; si <= 6; si += 3)
    {
        for (int sj = 0; sj <= 6; sj += 3)
        {
            // single group
            vector<bool> mp(10, false);
            int left = 9;

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (mp[board[si + i][sj + j]])
                    {
                        notOk();
                    }

                    mp[board[si + i][sj + j]] = true;
                    left--;
                }
            }

            if (left > 0)
            {
                notOk();
            }
        }
    }

    cout << "Yes" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}