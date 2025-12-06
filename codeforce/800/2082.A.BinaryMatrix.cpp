// link : https://codeforces.com/problemset/problem/2082/A
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
        cin >> matrix[i];

    int r = 0;
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        int xr = 0;
        for (int j = 0; j < m; j++)
        {
            int v = matrix[i][j] == '1';
            xr ^= v;
        }

        if (xr)
            r++;
    }

    for (int j = 0; j < m; j++)
    {
        int xr = 0;
        for (int i = 0; i < n; i++)
        {
            int v = matrix[i][j] == '1';
            xr ^= v;
        }

        if (xr)
            c++;
    }

    cout << max(r, c) << endl;
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