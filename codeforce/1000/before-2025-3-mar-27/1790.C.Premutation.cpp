// link : https://codeforces.com/problemset/problem/1790/C
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
    vector<int> perm(n);
    vector<vector<int>> m(n, vector<int>(n - 1));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1; j++)
            cin >> m[i][j];

    int fm = m[0][0];
    int diff = -1;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (m[i][0] == fm)
            cnt++;
        else
            diff = m[i][0];

        if (diff > 0 && i >= 3)
            break;
    }
    int prev = fm;

    if (cnt <= 1)
    {
        perm[0] = diff;
        prev = fm;
    }
    else
    {
        prev = diff;
        perm[0] = fm;
    }

    for (int i = 1; i < n - 1; i++)
    {
        perm[i] = prev;

        int diff = -1;

        for (int j = 0; j < n; j++)
        {
            if (m[j][i] != prev)
            {
                diff = m[j][i];
                break;
            }
        }
        prev = diff;
    }

    perm[n - 1] = prev;

    cout << perm[0];
    for (int i = 1; i < n; i++)
        cout << " " << perm[i];
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