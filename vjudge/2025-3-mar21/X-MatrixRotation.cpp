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

void rotate(vector<vector<int>> &m)
{
    int tl = m[0][0];
    int tr = m[0][1];
    int bl = m[1][0];
    int br = m[1][1];

    // rotate
    m[0][0] = bl;
    m[0][1] = tl;
    m[1][0] = br;
    m[1][1] = tr;
}

bool isValid(vector<vector<int>> &m)
{
    if (m[0][0] < m[0][1] && m[1][0] < m[1][1] && m[0][0] < m[1][0] && m[0][1] < m[1][1])
        return true;
    return false;
}

void program()
{
    vector<vector<int>> matrix(2, vector<int>(2));

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < 4; i++)
    {
        if (isValid(matrix))
        {
            cout << "YES" << endl;
            return;
        }
        rotate(matrix);
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