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

    vector<vector<int>> matrix(n, vector<int>(m));

    int k = (n * m) + 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int aij;
            cin >> aij;
            if (k & 1)
                matrix[i][j] = k - aij;
            else
            {
                int will = k - aij;
                if (will == 1)
                {
                    matrix[i][j] = k / 2;
                }
                else
                {

                    if (will == k / 2)
                    {
                        matrix[i][j] = 1;
                    }
                    else
                    {
                        matrix[i][j] = will;
                    }
                }
            }
        }
    }

    if (n == 1 && m == 1)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << matrix[i][0];
        for (int j = 1; j < m; j++)
        {
            cout << " " << matrix[i][j];
        }
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