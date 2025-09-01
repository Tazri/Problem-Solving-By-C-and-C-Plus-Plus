// link : https://codeforces.com/problemset/problem/1966/B
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

    vector<string> matrix(n);

    for (int i = 0; i < n; i++)
    {
        cin >> matrix[i];
    }

    // check all are same ?
    int w = 0;
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        for (char ch : matrix[i])
        {
            if (ch == 'W')
                w++;
            else
                b++;
        }
    }

    if (w == 0 || b == 0)
    {
        cout << "YES" << endl;
        return;
    }

    // check top layer
    char up = matrix[0][0];
    char down = matrix[n - 1][0];
    bool upSame = true;
    bool downSame = true;

    for (int i = 0; i < matrix[0].size(); i++)
    {
        if (matrix[0][i] != up)
            upSame = false;

        if (matrix[n - 1][i] != down)
            downSame = false;

        if (upSame == false && downSame == false)
        {
            break;
        }
    }

    char left = matrix[0][0];
    char right = matrix[0][m - 1];
    bool leftSame = true;
    bool rightSame = true;

    for (int i = 0; i < n; i++)
    {
        if (matrix[i][0] != left)
            leftSame = false;

        if (matrix[i][m - 1] != right)
            rightSame = false;

        if (rightSame == false && leftSame == false)
            break;
    }

    if (upSame && downSame)
    {
        if (up != down)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        return;
    }

    if (leftSame && rightSame)
    {
        if (left != right)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        return;
    }

    cout << "YES" << endl;
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
