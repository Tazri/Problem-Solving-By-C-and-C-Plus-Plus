// link : https://codeforces.com/problemset/problem/1598/B
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

void program()
{
    int n;
    cin >> n;
    int h = n / 2;
    vector<vector<int>> students(n, vector<int>(5, 0));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < 5; j++)
            cin >> students[i][j];

    for (int d1 = 0; d1 < 5; d1++)
    {
        for (int d2 = d1 + 1; d2 < 5; d2++)
        {
            int g1 = 0;
            int g2 = 0;
            int both = 0;

            for (int i = 0; i < n; i++)
            {
                if (students[i][d1] == 1 && students[i][d2] == 1)
                {
                    both++;
                }
                else if (students[i][d1] == 1)
                {
                    g1++;
                }
                else if (students[i][d2] == 1)
                {
                    g2++;
                }
            }

            if (both)
            {
                if (g1 < h)
                {
                    int need = h - g1;
                    int m = min(need, both);
                    g1 += m;
                    both -= m;
                }

                if (g2 < h)
                {
                    int need = h - g2;
                    int m = min(need, both);
                    g2 += m;
                    both -= m;
                }
            }

            if (g1 == h && g2 == h)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}