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

void zeroTrap(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << "U";
        cout << endl;
    }
}

void program()
{
    int n, k;
    cin >> n >> k;

    int totalCell = n * n;

    int trap = totalCell - k;

    if (trap == 1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    if (trap == 0)
    {
        zeroTrap(n);
        return;
    }

    vector<vector<char>> grid(n + 1, vector<char>(n + 1, 'D'));

    for (int i = 1; i <= n; i++)
    {
        if (trap <= 0)
            break;

        for (int j = 1; j <= n; j++)
        {
            if (trap <= 0)
                break;

            trap--;
            grid[i][j] = 'L';
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (grid[i][1] == 'L')
            grid[i][1] = 'U';
    }

    grid[1][1] = 'R';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << grid[i][j];
        cout << endl;
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