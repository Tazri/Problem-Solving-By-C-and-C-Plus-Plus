// link : https://codeforces.com/contest/1692/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int n = 8;

    vector<string> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (b[i][j] != '#')
            {
                continue;
            }

            if (b[i + 1][j + 1] == '#' && b[i - 1][j - 1] == '#' && b[i - 1][j + 1] == '#' && b[i + 1][j - 1] == '#')
            {
                cout << i + 1 << " " << j + 1 << endl;
                return;
            }
        }
    }
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