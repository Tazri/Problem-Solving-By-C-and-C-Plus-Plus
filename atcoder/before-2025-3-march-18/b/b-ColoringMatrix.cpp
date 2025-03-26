// link : https://atcoder.jp/contests/abc298/tasks/abc298_b?lang=en
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

void takeMatrix(vector<vector<int>> &m)
{
    for (int i = 0; i < m.size(); i++)
    {
        m[i] = vector<int>(m.size());
        for (int j = 0; j < m[i].size(); j++)
            cin >> m[i][j];
    }
}

void transposeMatrix(vector<vector<int>> &m)
{
    int n = m.size();
    vector<vector<int>> copy(n);

    for (int i = 0; i < n; i++)
    {
        copy[i] = vector<int>(n, 0);
    }

    // transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            copy[j][i] = m[i][j];
        }
    }

    m = copy;
}

void rotateRightMatrix(vector<vector<int>> &m)
{
    transposeMatrix(m);
    int n = m.size();

    for (int i = 0; i < n; i++)
    {
        // rotate every line
        for (int l = 0, r = n - 1; l < r; l++, r--)
        {
            int temp = m[i][r];
            m[i][r] = m[i][l];
            m[i][l] = temp;
        }
    }
}

void program()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    vector<vector<int>> b(n);
    takeMatrix(a);
    takeMatrix(b);

    for (int r = 0; r < 4; r++)
    {
        bool isOk = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == 1 && b[i][j] != 1)
                {
                    isOk = false;
                    break;
                }
            }
            if (isOk == false)
                break;
        }

        if (isOk)
        {
            cout << "Yes" << endl;
            return;
        }

        // rotate array
        rotateRightMatrix(a);
    }

    cout << "No" << endl;
}
int main()
{
    optimize();
    program();
    return 0;
}