// link : https://codeforces.com/problemset/problem/445/A
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
    vector<string> b(n);

    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[i][j] == '-')
                continue;
            int sum = i + j;

            if (sum & 1)
                b[i][j] = 'W';
            else
                b[i][j] = 'B';
        }
    }

    for (string s : b)
        cout << s << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}