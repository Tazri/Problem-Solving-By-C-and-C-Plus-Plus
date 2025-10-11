// link : https://codeforces.com/problemset/problem/2060/B
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
    int n, m;
    cin >> n >> m;

    vector<vector<int>> players(n, vector<int>(m, 0));
    vector<int> cards(n * m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> players[i][j];
            cards[players[i][j]] = i;
        }

    vector<int> perm(n);

    for (int i = 0; i < n; i++)
        perm[i] = cards[i];

    for (int t = 0; t < m; t++)
    {
        for (int i = 0, j = t * n; i < n; i++, j++)
        {
            if (cards[j] != perm[i])
            {
                cout << -1 << endl;
                return;
            }
        }
    }

    cout << perm[0] + 1;
    for (int i = 1; i < perm.size(); i++)
    {
        cout << " " << perm[i] + 1;
    }
    cout << endl;
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