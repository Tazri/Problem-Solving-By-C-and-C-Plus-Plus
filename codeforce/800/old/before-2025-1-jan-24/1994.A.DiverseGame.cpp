// link : https://codeforces.com/problemset/problem/1994/A
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

void test()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n);
    int ti = -1, tj = -1;
    int nm = n * m;
    vector<int> mp(nm + 1);

    for (int i = 0; i < n; i++)
    {
        matrix[i] = vector<int>(m);

        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    if (nm <= 1)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 1, j = nm; i <= nm; i++, j--)
    {
        mp[i] = j;
    }

    if (nm & 1)
    {
        int mid = (nm + 2 - 1) / 2;
        int temp = mp[mid];
        mp[mid] = mp[mid - 1];
        mp[mid - 1] = temp;
    }

    // change all value
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = mp[matrix[i][j]];
        }
    }

    // print the matrix
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
        test();
    return 0;
}