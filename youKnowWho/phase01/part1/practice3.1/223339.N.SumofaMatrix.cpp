// link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N
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

int r, c;
vector<vector<int>> a;
vector<vector<int>> b;

void add(int i = 0, int j = 0)
{
    if (i >= r || j >= c || b[i][j] == -200)
        return;
    a[i][j] += b[i][j];
    b[i][j] = -200;
    add(i + 1, j);
    add(i, j + 1);
}

void program()
{
    cin >> r >> c;
    a = vector<vector<int>>(r, vector<int>(c));
    b = vector<vector<int>>(r, vector<int>(c));

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> b[i][j];

    add();

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cout << a[i][j] << " \n"[j == c - 1];
}

int32_t main()
{
    optimize();
    program();
    return 0;
}