// link : https://codeforces.com/problemset/problem/1459/B
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

    vector<pair<int, int>> v = {
        {0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    set<pair<int, int>> st;
    for (pair<int, int> p : v)
    {
        int left = n - 1;
        int xk, yk;
        if (left % 2 == 0)
        {
            xk = left / 2;
            yk = left / 2;
        }
        else
        {
            if (p.first != 0)
            {
                yk = (left / 2) + 1;
                xk = left / 2;
            }
            else
            {
                xk = (left / 2) + 1;
                yk = left / 2;
            }
        }

        for (int i = 0; i <= xk; i++)
        {
            for (int j = 0; j <= yk; j++)
            {
                int x = p.first;
                int y = p.second;

                x += (i * 1);
                x -= ((xk - i) * 1);

                y += (j * 1);
                y -= ((yk - j) * 1);

                st.insert({x, y});
            }
        }
    }

    cout << st.size() << endl;
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